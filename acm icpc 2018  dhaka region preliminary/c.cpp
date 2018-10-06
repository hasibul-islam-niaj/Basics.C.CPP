#include<iostream>
using namespace std;

int main(){
    long long int l, r, oddDivisors, total=0;
    int testCase, t;
    cin >> testCase;
    for (t=1; t<=testCase; t++){
        cin>>l>>r;
        total=0;

        for (long long int i=l; i<=r; i++){
            oddDivisors = 0;
            for (long long int j = 2; j<(i/2)+1; j++){
                if (i%j == 0){
                    if (j % 2 != 0){
                        oddDivisors++;
                    }
                }
            }

            if (i%2 !=0 && i>2){
                oddDivisors += 2;
            }
            else {
                oddDivisors += 1;
            }

            if (oddDivisors%2 != 0){
                total++;
            }

            oddDivisors = 0;
        }
        cout<<"Case "<<t<<": "<<total<<endl;
    }

    return 0;
}
