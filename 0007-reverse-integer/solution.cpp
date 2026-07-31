class Solution {
public:
    int reverse(int x) {
        int val = 0;
        while(x!=0){
            int digit = x%10;
            if(x>0){
                if((INT_MAX-digit)/10 <val) return 0;}
            else{
                if((INT_MIN -digit)/10>val) return 0;
            }
            val = (val*10)+digit;
            x /=10; 
        }
        return val;
    }
};
