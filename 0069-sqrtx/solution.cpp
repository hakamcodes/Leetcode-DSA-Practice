class Solution {
public:
    int mySqrt(int x) {
        long long int st=0,end=x;
        while(st<=end){
            long long int mid = st+(end-st)/2;
            long long int power = mid*mid;
            if(power==x || (power<x && (mid+1)*(mid+1)>x)) return mid;
            else if(power<x) st = mid+1;
            else end = mid-1;
        }
        return -1;
    }
};
