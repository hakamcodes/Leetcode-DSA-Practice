class Solution {
public:
    int gcd(int a, int b){
        if(a==0) return b;
        if(b==0) return a;

        if(a>b) return gcd(a-b, b);
        else return gcd(b-a, a);
    }
    int findGCD(vector<int>& nums) {
        int min=1001, max = 0;
        for(int val: nums){
            if(val>max) max = val;
            if(val<min) min = val;
        }
        int GCD = gcd(max, min);
        return GCD;
    }
};
