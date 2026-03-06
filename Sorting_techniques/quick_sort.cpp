#include<iostream>
using namespace std;

int find_pivot_indx(vector<int>&arr,int st,int end){
    int idx=st-1; //alwys one less then the start
    int j=0;
    int pivot=arr[end];
    for(j=st;j<=end;j++){ //if j<end is done then you have to add another line to swap indes idx+1 and end
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    //now put the pivot element to its correct place
    // swap(arr[idx+1],arr[end]);
    return idx;
}

void quick_sort(vector<int>&arr,int st,int end){
    if(st>=end) return; //base case
    int pivot_indx = find_pivot_indx(arr,st,end);
    //now partition and sort
    quick_sort(arr,st,pivot_indx-1);
    quick_sort(arr,pivot_indx+1,end);
}

int main(){
    vector<int> arr = {5,6,1,8,9,4,2,9,10};
    quick_sort(arr,0,9);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}