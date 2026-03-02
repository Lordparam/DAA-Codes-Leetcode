#include<iostream>
using namespace std;
string intToRoman(int num) {
        vector<string> name= {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> pos = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans;
        for(int i = 0 ;num > 0  ; i++){
            while(num >= pos[i]){
                ans  = ans + name[i];
                num = num - pos[i];
            }
        }
        return ans;
    }
int main(){
    int a = 3749;
    cout << intToRoman(a); // o/p -> MMMDCCXLIX
    return 0;
}