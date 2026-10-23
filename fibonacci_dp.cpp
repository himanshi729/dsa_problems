#include<iostream>
using namespace std;

int fibDp(int n, vector<int>& f)
{
    if(n==0 || n==1){
        return n;
    }

    if(f[n] != -1){
        return f[n];
    }

    f[n] = fibDp(n-1, f) + fibDp(n-2, f);
    return f[n];

}

int fibTabulation(int n){
     vector<int> fib(n+1, 0);
     fib[0] = 0;
     fib[1] = 1;

     for(int i =2; i<=n; i++){
        fib[i] = fib[i-1]+fib[i-2];
     }
     return fib[n];
    
}

int main(){
    int n = 10;
    // vector<int> f(n+1, -1);
    cout<<fibTabulation(n)<<endl;
    return 0;
}