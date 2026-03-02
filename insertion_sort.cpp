#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>&nums){
    for(int i = 1; i < nums.size(); i++){
        int store = nums[i];
        int j = i-1;
        while(j>=0 && nums[j]>=store){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=store;
    }
}
int main(){
    vector<int> arr = {10,1,7,4,8,2,11};
    insertion_sort(arr);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}