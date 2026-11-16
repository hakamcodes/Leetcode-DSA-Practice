class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        int a=0, b=0, c=1;
        for(int i=1; i<n; i++){
            a =b; b=c; c=a+b;
        }
        return c;
    }
};
