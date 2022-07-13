/*
*   Find the prime number between two number
*/
#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int num){
        for(int i = 2; i <= sqrt(num); i++){
            if(num%i == 0){
                return false;
            }
        }
    return true;
}
int main() {
    int a,b;
    cin>>a>>b;

    for(int num = a; num<=b; num++){
        if(isPrime(num)){
            cout<<num<<endl;
        }

    }
}