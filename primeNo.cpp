#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void allPrimes(int n){
    //for all primes
    for(int i=0; i<=n; i++)
    {
        if(isPrime(i)){
        cout<<i<<" "<<endl;
        }
    }
    cout<<endl;
}

int main(){
    cout<<isPrime(5)<<endl;
    return 0;
}