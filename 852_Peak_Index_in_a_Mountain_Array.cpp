#include<iostream>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size(); int ans;
        int start = 0;
        int end = n-1;
        while(start<=end){ //here <= will come why??__dryrun for[18,29,38,59,98,100,99,98,90]
            int mid = start + (end-start)/2;
            if(arr[mid]<arr[mid+1]){//it means we are climbing the mountain
                start=mid+1;

            }
            else{ //we are either on the answer or down the mountain        
                ans=mid;
                end=mid-1;

            }
        }
        return ans;
    }
int main(){
    vector<int> arr= {18,29,38,59,98,100,99,98,90};
    int ans = peakIndexInMountainArray(arr);
    cout << ans;
    return 0;
}