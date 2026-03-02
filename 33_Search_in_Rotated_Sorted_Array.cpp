#include<iostream>
using namespace std;
 int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s=0,mid;
        int e=n-1;
        while(s<=e){
             mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>=nums[s]){ //in left sorted half
                if(target<=nums[mid] && target>=nums[s]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{ //another sorted half i.e right
                if(target>=nums[mid] && target<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }

        }
        return -1;
    }
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    int ans = search(arr,target); //o/p-> 4
    cout << ans;
    return 0;
}