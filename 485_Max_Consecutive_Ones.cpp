#include<iostream>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0; int max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                if(count>max){
                max=count;    
                }
                count=0;
            }
        }
            if(count>max){ //you directly cannot do like -> if(count>max) return count, else return max,IT WOULD BE WRONG____ WHY?? Suppose if array is {0,0,0,0} then since no ones so that max will remain INT_MIN which when returned creates problem***
                max=count;
            }
        return max;
    }
int main(){
    vector<int> arr = {0,1,1,1,0,1,1,1,1,1,0,0,1}; //o/p=5
    int ans = findMaxConsecutiveOnes(arr);
    cout << ans;
    return 0;
}