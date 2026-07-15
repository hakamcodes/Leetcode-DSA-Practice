class Solution {
public:
    bool isPalindrome(string s) {
        int st=0, end= s.length()-1;
        while(st<end){
            s[st] = tolower(s[st]);
            s[end] = tolower(s[end]);
            if(isalnum(s[st])){
                if(isalnum(s[end])){
                    if(s[st] != s[end]) return false;
                    else{
                        st++;
                        end--;
                    }
                }else end--;
            }else st++;
        }
        return true;
    }
};
