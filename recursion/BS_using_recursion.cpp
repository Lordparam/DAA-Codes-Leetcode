#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_search(vector<int>&arr,int start,int end,int tar){
  if(start>end) return -1;
  int mid = start + (end-start)/2;
  if(arr[mid]==tar) return mid;
  else if(arr[mid]>tar) return binary_search(arr,start,mid-1,tar);
  else return binary_search(arr,mid+1,end,tar);
}
int main(){
  vector<int> arr = {1,22,55,77,89};
  int ans = binary_search(arr,0,arr.size()-1,77);
  cout << ans;
  return 0;
}