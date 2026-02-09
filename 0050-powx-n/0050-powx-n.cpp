class Solution {
public:
    // double pow(double x, int n){
    //     if(n==1){
    //         return x;
    //     }
    //     double ans = x*pow(x,n-1);
    //     return ans;
    // }
    double myPow(double x, int n) {
        long long N=n;
        if (N<0){
            x=1/x;
            N=-N;
        }
        // double ans;
        return pow(x,N);

        // return 0;
    }
    double pow(double x, long long n){
        if (n == 0)
            return 1;
        if (n < 0)
            return 1 / myPow(x, -n);

        double half = myPow(x, n / 2);

        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }
};