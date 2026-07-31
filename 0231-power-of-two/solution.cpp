class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int m =1;
        while(m<=n){
            if(m==n) return true;
            m *=2;
        }
        return false;
    }
};
