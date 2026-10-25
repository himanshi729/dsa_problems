#include<iostream>

using namespace std;

int friendsPairing(int n){
    if(n==1 || n==2)
    return n;

    int single = friendsPairing(n-1);
    int pairing = friendsPairing(n-2) * (n-1);

    return single + pairing;
}

int main(){
    cout<<"Answer: "<<friendsPairing(4)<<endl;
    return 0;
}