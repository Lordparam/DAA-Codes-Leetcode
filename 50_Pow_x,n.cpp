#include<iostream>
using namespace std;
double myPow(double x, long long n) {
        double ans=1.000;
         if(n < 0) {
            x = 1 / x;     // invert base
            n = -n;        // make exponent positive
        }
        while(n>0){
            if(n%2==1){
                ans=ans*x;
                n--;
            }
            else{
                n=n/2;
                x=x*x;
            }
        }
        return ans;
    }
int main(){
    cout << myPow(2,8) << endl; // o/p -> +256
    cout << myPow(-2,5); //o/p -> -32
    return 0;
}
/* this solution is purely a mathematic magic, for instance lets say you have 2^10 so can u write that (2^2)^5 i.e if the power is even then you can multiply the base with itself and half the power and if say you have 2^11 then you have to do 2 * 2^10 that in the code is -> ans=ans*x , and we will be doing that until the power is less then 0(not equal to)*/