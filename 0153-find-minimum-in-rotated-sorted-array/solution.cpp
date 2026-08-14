class Solution {
public:
    int findMin(vector<int>& arr) {
        int st=0,end= arr.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(arr[mid]<arr[0]){
                if(arr[mid]<arr[mid-1]) return arr[mid];
                else end = mid-1;
            } else{
                if(arr[mid]>arr[arr.size()-1]) st = mid+1;
                else return arr[0];
            }
        }
        return -1;
    }
};
