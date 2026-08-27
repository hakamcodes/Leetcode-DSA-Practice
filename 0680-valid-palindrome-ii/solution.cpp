class Solution {
public:
    bool pal(string s, int st, int end){
        while(st<end){
            if(s[st]!=s[end]) return false;
            else{
                st++; end--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int count =0, n = s.length();
        int st=0, end=n-1;
        while(st<end){
            if(s[st]!=s[end]){
                return pal(s, st+1, end) || pal(s, st, end-1);
            }
                st++; end--;
        }
        return true;
    }
};
