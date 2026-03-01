#include<iostream>
#include<vector>
using namespace std;
    void Rotate(vector<int>& nums, int k) {
        //since i know that k can be big but after a certain point if k==n then array will be same, so for safety i will add
        int n = nums.size();
        k = k%n;
        //take out those numbers which would be lost when front elements will shift by k pos
        vector<int> temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        //shifting
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        //overwrite shifted elements
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
    }
int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    int k=3;
    Rotate(arr,k);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;
}