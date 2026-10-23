#include<iostream>
using namespace std;

int reverse(int n){
    int result = 0;
    while(n != 0)
    {
        int remainder = n%10;
        result = result * 10 + remainder;
        n = n/10;
    }
    return result;
}

bool isPalindrome(int num){
    int revNum = reverse(num);
    return num == revNum;
}

int main(){
    int num = 234;
   if(isPalindrome(num))
    {
        cout<<"Number is Palindrome "<<endl;
    }
    else{
        cout<<"Not a Palindrome ";
    }
    return 0;
}