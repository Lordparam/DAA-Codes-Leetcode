#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //do transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){ //here j is not init with 0 __ if did so we will get original matrix back***
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //swap columns
        for(int i=0;i<n;i++){ //for each row we perform this swapping btw the first and last element then first++, last--
            int l=0;
            int r=n-1;
            int j=0;
            while(l<r){
                swap(matrix[i][l],matrix[i][r]);
                l++;r--;
            }
        }
    }
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
    