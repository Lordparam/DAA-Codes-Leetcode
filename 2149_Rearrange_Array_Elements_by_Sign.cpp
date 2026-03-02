#include<iostream>
using namespace std;
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
    
    int i=0,j=0;
    nums ={};
    while(i<pos.size() && j<neg.size()){
        nums.push_back(pos[i]);
        nums.push_back(neg[j]);
        i++;j++;
    }
    return nums;
}
int main(){
    vector<int> arr ={3,1,-2,-5,2,-4};
    vector<int> ans= rearrangeArray(arr);
    for(int i:ans){
        cout << i << " ";
    }
    return 0;
}