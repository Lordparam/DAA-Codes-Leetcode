#include<iostream>
using namespace std;

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            int mid = s +(e-s)/2;
            if(nums[mid]==target){
                return true;
            }
            //check for duplicates i.e if the first and last element is same as the mid element we can do s++ e-- i.e reduce the search space since that element will be reduced to freq from 3 to 1 still 
            if(nums[mid]==nums[s] && nums[mid]==nums[e]){
                s++;
                e--;
                continue; //we dont need any operation further after reducing the search space
            }
            //rest same logic as in part 1 of this question

            if(nums[mid]>= nums[s]){ //left part sorted
                if(target>=nums[s] && target<=nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{ //right part sorted
                if(target>=nums[mid] && target<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return false;
    }
int main(){
    vector<int> arr = {2,5,6,0,0,1,2};
    int target = 0;
    bool ans = search(arr,target);
    cout << ans;
    return 0;
}