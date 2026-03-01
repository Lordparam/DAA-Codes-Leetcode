#include<iostream>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int lsum=0;
        int rsum=0;
        int n = nums.size();
        int sum=0;
        //find total sum first
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        //now logically subtract from total sum the left elements so as to get right sum and then compare
        for(int i=0;i<n;i++){
            rsum = sum-nums[i]-lsum;
            if(rsum==lsum){
                return i;
            }
            lsum=lsum+nums[i];//this line is written here because the pivot index is not involved in any operation perfomed while finding pivot index...(dry run)
        }
        return -1;
    }
int main(){
    vector<int> arr = {1,7,3,6,5,6};
    int ans = pivotIndex(arr);
    cout << ans;
    return 0;
}