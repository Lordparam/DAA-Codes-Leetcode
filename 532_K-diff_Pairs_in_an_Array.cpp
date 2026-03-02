#include<iostream>
using namespace std;
int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp; int count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++; //no worries for the duplicates as in map the keys are unique the pair section is the freq of them
        }
      unordered_map<int,int>::iterator it = mp.begin();
      while(it!=mp.end()){
        //edge case
        if(k==0){ //say we are asked to find which elements when subtracted gives 0 ,so we are pretty sure that those elements having freq_count>1 i.e 2,3,4 surely will subtract from one another and give 0 but for each element occuring more that 1 times count++ will happen if k is 0
            if(it->second>1){
                count++;
            }
        }
        //or if k is not 0 then we will find that for any element whether that element+k is there or not so that we can get k on o/p -> element-(element-k) as k.....
        else if(mp.find(it->first + k) != mp.end()){
                count++;
        }
                it++;
      }
      return count;
    }

int main(){
    vector<int> arr = {3,1,4,1,5};
    int k = 2;
    int ans = findPairs(arr,k);
    cout << ans;
    return 0;
}