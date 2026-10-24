#include<iostream>
#include<vector>
using namespace std;

int search(int arr[], int s, int e, int target){
    if(s>e){
        return -1;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == target){
            return mid;
        }

        if(arr[s]<=arr[mid]){ //For L1
            if(arr[s]<=target && target<=arr[mid]) //left half
            return search(arr, s, mid-1, target);
            else                         // right half
            return search(arr, mid+1, e, target);
        }
        else{                   // for L2
            if(arr[mid]<target && target<=arr[e]) // right half
            return search(arr, mid+1, e, target);
            else                        //left half
            return search(arr, s, mid-1, target);
        }    
    }


int main(){
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    cout<<"Index: "<<search(arr, 0, n-1, 0)<<endl;

    return 0;
}
