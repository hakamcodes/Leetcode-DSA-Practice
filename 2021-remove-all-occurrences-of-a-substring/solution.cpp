class Solution {
public:
    string removeOccurrences(string s, string part) {
       bool isPresent = true;
       while(isPresent){
        int indx = s.find(part);
        if(indx < s.length()){
            s.erase(indx, part.length());
        }else isPresent = false;
       }
       return s;
    }
};
