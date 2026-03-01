#include<iostream>
using namespace std;
    int maxArea(vector<int>& height) {
        int n = height.size();
        int s = 0;
        int e = n-1;
        int max_area = 0;
        while(s<e){
            int h = min(height[s],height[e]);
            int length = e-s;
            int area = h*length;
            if(area>max_area){
                max_area = area; 
            }
            if(height[s]>=height[e]){
                e--;
            }
            else s++;

        }
        return max_area;
    }
int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    int ans = maxArea(arr);
    cout << ans;
    return 0;
}