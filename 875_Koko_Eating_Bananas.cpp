#include<iostream>
using namespace std;
int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;
        int e = *max_element(piles.begin(), piles.end());
        int s = 1; //speed cant be 0 remember
        while(s<=e){
            long long int sum=0;
            int mid = s + (e-s)/2;
            for(int i=0;i<piles.size();i++){
                sum=sum + ceil((double)piles[i] / mid); //ese hi hoga bhaiii
            }
            if(sum<=h){
                ans = mid; //store
                e=mid-1;
            }
            if(sum>h){
                s=mid+1;
            }
        }
        return ans;
    }
int main(){
    vector<int> piles = {30,11,23,4,20};
    int h=6;
    int ans = minEatingSpeed(piles,h);
    cout << ans;
    return 0;
}