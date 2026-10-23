#include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str, string output, int i, int map[]){
    if(i==str.size()){
        cout<<"Answer: "<<output<<endl;
        return;
    }
    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]){
        removeDuplicates(str, output, i+1, map);
    }
    else{
        map[mapIdx] = true;
        removeDuplicates(str, output+str[i], i+1, map);
    }
}

int main(){
    string str = "himanshipawar";
    string output = "";
    int map[26] = {false};

    removeDuplicates(str, output, 0, map);
    return 0;
}