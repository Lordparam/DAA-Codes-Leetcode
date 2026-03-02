class Solution {
public:
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
            }
            while(st.find(x+1)!=st.end()){
                cnt++;
                x=x+1;
            }
            largest = max(largest,cnt);
            it++;
        }
        return largest;
    }
};