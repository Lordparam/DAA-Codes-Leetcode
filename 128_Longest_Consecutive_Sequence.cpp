#include<iostream>
#include<unordered_set>
using namespace std;

 int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st; int largest=0,x,cnt;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        unordered_set<int>::iterator it = st.begin();
        while(it!=st.end()){
            if(st.find(*it-1)==st.end()){ //if its prev element not found that it is the first in the sequence
                 cnt=1;
                x = *it;
            while(st.find(x+1)!=st.end()){
                cnt++;
                x=x+1;
            }
            
            largest = max(largest,cnt);
            }
            it++;
        }
        return largest;
    }
int main(){
    vector<int> arr ={100,4,200,1,3,2};
    int ans = longestConsecutive(arr);
    cout << ans; //o/p->4 (longest consecutive element -> 1,2,3,4 (4))
    return 0;
}