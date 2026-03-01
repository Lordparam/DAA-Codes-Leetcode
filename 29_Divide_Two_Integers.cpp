#include<iostream>
using namespace std;
    long long int divide(long long int dividend, long long int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        long long int start = 0;
        long long int flag = 0, flag1 = 0;
        if (divisor < 0) {
            divisor = abs(divisor);
            flag = 1;
        }
        if (dividend < 0) {
            dividend = abs(dividend);
            flag1 = 1;
        }
        long long int end = abs(dividend);
        long long int ans = 0;
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (divisor * mid <= dividend) {
                ans = mid;
                start = mid + 1;
            }
            if (divisor * mid > dividend) {
                end = mid - 1;
            }
        }
        if (flag == 1 && flag1 == 1) { // both neg
            return ans;
        }
        if (flag == 1 || flag1 == 1) { // either of them is neg
            return 0 - ans;
        }
        return ans;
    }
       double setPrecision(long long dividend,
                    long long divisor,
                    double ans,
                    int precision) {                                                
    double step = 0.1;
    for(int i = 1; i <= precision; i++) {
        double temp = ans + step;
        while(temp * divisor <= dividend) {
            ans = temp;
            temp += step;
        }
        step /= 10;
    }
    return ans;
}
int main(){
    long long int ans = divide(10,7);
    cout << "Answer without Precision : " << ans << endl;
    double ans1 = setPrecision(10,7,ans,3);
    cout << "Answer after precision : " << ans1;
    return 0;
}