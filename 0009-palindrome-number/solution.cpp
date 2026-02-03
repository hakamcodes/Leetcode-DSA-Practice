class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)) return false;
        long long rev=0,x1=x;
        while(x!=0){
            rev *= 10;
            rev += (x%10);
            x /=10;
        }
        return (x1==rev);
    }
};
