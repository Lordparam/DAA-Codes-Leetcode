/*Given an already sorted array of positive integers, design an
algorithm and implement it using a program to find whether a given key
element is present in the sorted array or not. For an array arr[n], search
at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval
(arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the
index 2k to find the element key. (Complexity < O(n), where n is the
number of elements need to be scanned for searching): Jump Search */
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n,key,compare=0,ele,i;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> arr;
    cout << "Enter elements in the array : ";
    for(int i=0;i<n;i++){
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Enter element to find in array : ";
    cin >> key;
    bool found=false;
    int step = sqrt(n);
    int prev = 0;
    // Jumping phase
    for(int i=0; i<n; i+=step){
        compare++;
        if(arr[i] == key){
            found = true;
            break;
        }
        if(arr[i] > key){
            for(int j=prev; j<=i; j++){
                compare++;
                if(arr[j] == key){
                    found = true;
                    break;
                }
            }
            break;
        }
        prev = i;
    }
    int end= min(prev+step,n); //someimes prev+step goes out of bounds
    //edge case if elements left on the right side
    if(!found){
    while(prev<end){
        compare++;
        if(arr[prev]==key) {
        found =true;
        break;
        }
        prev++;
    }
}
    if(found){
        cout << "Found in " << compare << " comparisons";
    }
    else{
        cout << "Not Found in " << compare << " comparisons";
    }
    return 0;
}