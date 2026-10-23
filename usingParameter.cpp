#include<iostream>
using namespace std;

int friendsPairing(int n){
    if(n==1 || n==2)
    return n;

    int single = friendsPairing(n-1);
    int pair = friendsPairing(n-2) * (n-1);

    return single + pair;

}

int main(){
cout<<friendsPairing(5)<<endl;
return 0;
}