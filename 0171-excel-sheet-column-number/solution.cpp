class Solution {
public:
    int titleToNumber(string columnTitle) {
       long long colmn=0;
       for(char c : columnTitle){
        colmn = colmn*26 + (int(c)-64);
       } 
       return colmn;
    }
};
