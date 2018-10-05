#include <iostream>
using namespace std;
class Math{
public:
    long long int gcd(long long int firstNumber,long long int secondNumber);
};

long long int Math::gcd(long long int a, long long int b){
    long long int gcd=1;

    for (long long int i=1; i<=a; i++){
        if (a%i == 0 && b%i == 0){
            gcd = i;
        }
    }

    return gcd;
};

int main() {
    Math math;
    long long int firstNumber, secondNumber;

    cin>>firstNumber;
    cin>>secondNumber;

    cout<<math.gcd(firstNumber, secondNumber)<<endl;

    return 0;
}