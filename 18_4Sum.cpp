#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            //skip duplicates for i
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++) {
                //skip duplicates for j
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int l = j + 1;
                int e = nums.size() - 1;
                while (l < e) { // l->left, e->end
                    long long int sum =
                        1LL * nums[l] + nums[e] + nums[i] +
                        nums[j]; // 1LL * It forces the entire arithmetic
                                 // expression to be evaluated in long long___
                                 // as in leetcode u will be having overflow if
                                 // long long not used
                    if (sum < target) {
                        l++;
                    } else if (sum > target) {
                        e--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[l], nums[e]});
                        l++;
                        e--;
                        while (l < e && nums[l] == nums[l - 1])
                            l++;
                        while (l < e && nums[e] == nums[e + 1])
                            e--;
                    }
                }
            }
        }
        return ans;
    }

int main(){
    vector<int> arr = {1,0,-1,0,-2,2};
    vector<vector<int>> ans = fourSum(arr,0);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}