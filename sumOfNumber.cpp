#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int result = 0;

    while(n>0){
        result += (n%10);
        n = n/10;
    }
    return result;
}
int main(){
    cout<<sumOfDigits(2344);
    return 0;

}