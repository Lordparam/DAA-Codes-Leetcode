#include<iostream>
using namespace std;

void merge(vector<int>&arr,int start,int mid,int end){
    int i = start; int j = mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){ //leftover sorted push directly into temp
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++){
        arr[start+i]=temp[i];
    }
}

void merge_sort(vector<int>&arr,int start,int end){
    //base condition->
    if(start>=end) return;
    int mid = start + (end-start)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    vector<int> arr ={7,5,3,2,4,7,9,3,4,6,9,0};
    merge_sort(arr,0,11);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}