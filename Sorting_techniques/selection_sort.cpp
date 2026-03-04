#include<iostream>
using namespace std;
void selection_sort(vector<int>&nums){
    for(int i=0;i<nums.size();i++){
        int min=nums[i];
        int index=i;
        int j=i+1;
        while(j<nums.size()){
            if(nums[j]<min){
                min=nums[j];
                index=j;
            }
            j++;
        }
        swap(nums[i],nums[index]);
    }
}
int main(){
    vector<int> nums = {3,4,6,7,1,3,6,8,2,4,6,8,99,5,78,56};
    selection_sort(nums);
    for(int i:nums){
        cout << i << " ";
    }
    return 0;
}