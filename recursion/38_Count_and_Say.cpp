#include<iostream>
using namespace std;
string countAndSay(int n) {
        if(n==1) return "1";
        string s = countAndSay(n-1);
        //processing the string
        string ans = "";
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            int count=1; //already took ch so 1
            while(i<s.size() && s[i]==s[i+1]){
                count++;
                i++;
            }
            ans = ans + to_string(count)+string(1,ch);
        }
        return ans;
    }
int main(){
    int n = 4;
    string ans = countAndSay(n);
    cout << ans;
    return 0;
}