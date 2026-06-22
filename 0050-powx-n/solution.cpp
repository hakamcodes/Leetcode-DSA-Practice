class Solution {
public:
    double myPow(double x, int n) {
        long int N=n;
        if(n == 0) return 1;
        else if(n<0){
            N = -N;
            x= 1/x;
        }

        double ans=1;
        int rem;
        while(N>0){
            rem = N%2;
            if(rem != 0) ans *= x;
            x *= x;
            N /= 2;
        }
        return ans;
    }
};
