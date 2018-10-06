#include<iostream>
using namespace std;

int main(){
    long long int n, i, test, data;

    int testCase,t, prime = 0, digit=0, coprime, ck, testData;
    cin >> testCase;
    for (t=1; t<=testCase; t++){
        cin>>n;
        prime = 0;
        digit=0;

        if (n%2 == 0){
            n = n-1;
        }

        for (i = n; i>=3; i=i-2){
            for (long long int j =2; j<i/2; j++){
                if (i%j == 0){
                    prime = 1;
                    break;
                }
            }

            if (prime == 0){
                test = i;
                data= i;

                while (test != 0){
                    testData = test % 10;

                    if (testData%2 == 0){
                        ck = 1;
                    }
                    else {
                        for (int j = 2; j<testData/2; j++){
                            if (testData%j == 0){
                                ck = 1;
                                break;
                            }
                        }

                        if (ck == 0){
                            coprime ++;
                        }
                    }

                    test /= 10;
                    digit ++;

                    if (coprime < digit){
                        break;
                    }
                }

                if (digit == coprime){
                    cout<<"Case "<<t<< ": "<<data<<endl;
                    break;
                }

                digit = 0;
                coprime = 0;
                ck = 0;
                data = 0;
            }
            else {
                prime = 0;
                digit = 0;
                coprime = 0;
                ck = 0;
                data = 0;
            }
        }
    }
}
