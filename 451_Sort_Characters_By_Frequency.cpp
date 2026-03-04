#include<iostream>
using namespace std;
string frequencySort(string s) {
        string ans;
        int freq[128]={0};
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        int max_freq=0;
        int index=-1;
        while(true){
            max_freq = 0;
            index = -1;
        for(int i=0;i<128;i++){
            if(freq[i]>max_freq){
                max_freq=freq[i];
                index=i;
            }
        }
        if(max_freq == 0)
    break; //if every charac has freq 0 break
            for(int i=1;i<=max_freq;i++){
                ans += char(index); //typecast
            }
            if(index>=0)
            freq[index]=0;
        }
        return ans;
    }
int main(){
    string str = "abaaaciodddssoof";
    string ans = frequencySort(str);
    cout << ans; // o/p -> aaaadddooossbcfi
    return 0;
}