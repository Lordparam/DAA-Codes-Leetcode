#include<iostream>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int top,left;
        left=top=0;
        int right,bottom;
        right = m-1; //no. of column-1
        bottom = n-1; //no. of rows-1
        //now just count cycle

        while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]); //top->constant
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
        }
    }
    return ans;
    }
int main(){
    vector<vector<int>> arr = {{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
    vector<int> ans = spiralOrder(arr);
    int n = ans.size();
    for(int i=0;i<n;i++){
            cout << ans[i] << " ";
        
    }
    return 0;
}
    