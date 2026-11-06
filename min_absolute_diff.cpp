#include<iostream>
using namespace std;

int main(){
    vector<int> A = {1,2,3};
    vector<int> B = {3,2,1};

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int absDiff = 0;

    for(int i =0; i<A.size(); i++){
        absDiff += abs(A[i] - B[i]);
    }
    cout<<"Absolute Difference = "<<absDiff<<endl;
    return 0;

}

// Time Complexity - t(n) = O(n log n)