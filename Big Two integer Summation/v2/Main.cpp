//
// Created by hasibul on 8/23/18.
//
#include <iostream>
#include <string>
using namespace std;

class BigIntegerAddition{
public:
    string add(string firstNum, string secondNum);
};

string BigIntegerAddition::add(string firstNum, string secondNum) {
    int fnLen = firstNum.length();
    int snLen = secondNum.length();

    string result = "";

    int length;

    if (fnLen > snLen) {
        for (int i = 0; i < fnLen - snLen; i++){
            secondNum = "0" + secondNum;
        }
        length = fnLen;
    }
    else {
        for (int i=0; i<snLen-fnLen; i++){
            firstNum = "0" + firstNum;
        }
        length = snLen;
    }

    int a, b;
    string carry = "0";

    for (int i=length-1; i>=0; i--){
        a = ((int) firstNum[i])- 48;
        b = ((int) secondNum[i]) - 48;

        if (carry != "0"){
            a += ((int) carry[0]) - 48;
            carry = "0";
        }

        if (to_string(a+b).length() > 1){
            carry = to_string(a+b)[0];
        }

        if (carry == "0")
            result = to_string(a+b) + result;
        else
            result = to_string(a+b)[1] + result;
    }

    if (carry != "0"){
        result = carry + result;
    }

    cout<<result<<endl;

    return result;
}

int main(){
    BigIntegerAddition math;

    string a, b;

    cin>>a;
    cin>>b;

    math.add(a, b);
}