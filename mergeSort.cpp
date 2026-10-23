#include<iostream>
using namespace std;

void mergeArray(int arr[], int s, int mid, int e){
    vector<int> temp;

    int i = s;
    int j = mid+1;

    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }

    //copy temp elements to the arr[]
    for(int idx=s,x=0 ; idx<=e; idx++){
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int s, int e){
    if(s>=e)
    return;

    int mid = (s+e)/2;
    

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    mergeArray(arr, s, mid, e);
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[] = {6,4,2,7,8,1,3};
    int n = 7;
    mergeSort(arr, 0, n-1);
    printArr(arr, n);

    return 0;
}