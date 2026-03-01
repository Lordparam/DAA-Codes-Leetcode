#include<iostream>
using namespace std;
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //use 2 pointer approach but wisely
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            //for handling duplicates check if number is == prev number
            if(i>0 && nums[i]==nums[i-1]){
                continue; //why this ?? __ because suppose you have {0,0,1,0,-1,0} and u check for i=0 i.e element{0} then won't you get same subarrays for {0} and also for the {0} at index 1?? so that's why
            }
            int l=i+1;
            int e=n-1;
            while(l<e){
                int sum = nums[l]+nums[e]+nums[i];
                if(sum<0){
                    l++;
                }
                else if(sum>0){
                    e--;
                }
                else{
                    ans.push_back({nums[i], nums[l], nums[e]});
                    l++;
                    e--;
                    while(l < e && nums[l] == nums[l-1]) l++;
                    while(l < e && nums[e] == nums[e+1]) e--;//duplicacy remove for elements
                }
            }
        }
        return ans;
    }
    int main(){
        vector<int> arr = {0,0,0,1,0,-1,0,1};
        vector<vector<int>> ans = threeSum(arr);
        for(int i=0;i<ans.size();i++){
            cout << "{";
            for(int j=0;j<ans[0].size();j++){
                cout << " " << ans[i][j] << " ";
            }
            cout << "}";
        }
        return 0;
    }