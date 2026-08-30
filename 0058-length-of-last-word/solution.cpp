class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.length()-1;
        int len=0;
        while(n>-1){
            if(s[n]!= ' '){
                len++;
            }else if(s[n]==' ' && len>0){
                return len;
            }
            n--;
        }
        return len;
    }
};
