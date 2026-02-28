#include<iostream>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans(m,vector<int>(n)); // so this line says that there is a 2D array named ans which has rows = m(m is the column of input matrix, and inside of each m i want a vector<int>(n) i.e of size n(n is the row size which here becomes column size due to transpose of matrix))
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
               ans[i][j] = matrix[j][i];
            }
        }
        return ans;
    }
int main(){
    vector<vector<int>> arr = {{2,3,4},{5,6,7},{8,9,0}};
    vector<vector<int>> ans = transpose(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}