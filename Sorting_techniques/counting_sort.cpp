#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,5,3,2,1,5,4};

    int hash[100] = {0};

    for(int i=0;i<7;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<100;i++){
        if(hash[i]>0){
            cout << i << " -> " << hash[i] << endl;
        }
    }

    return 0;
}