#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubsets(string str, string subset){
    if(str.size() == 0){
        cout<<subset<<"\n";
        return;
    }

    char ch = str[0];

    //for YES choice
    printSubsets(str.substr(1, str.size()-1), subset + ch);

    //for NO choice
    printSubsets(str.substr(1, str.size()-1), subset);
}

int main(){
    string str= "abc";
    string subset = "";

    printSubsets(str, subset);

    return 0;

}