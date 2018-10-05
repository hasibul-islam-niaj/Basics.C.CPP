#include <iostream>
using namespace std;
class Math{
public:
    long long int gcd(long long int firstNumber,long long int secondNumber);
};

long long int Math::gcd(long long int a, long long int b){
    long long int temp;

    while(b!=0){
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
};

int main() {
    Math math;
    long long int firstNumber, secondNumber;

    cin>>firstNumber;
    cin>>secondNumber;

    cout<<math.gcd(firstNumber, secondNumber)<<endl;

    return 0;
}