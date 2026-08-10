class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n =  arr.size();
        vector<int> frequency;
        for(int i=0;i<n;i++){
            int freq =1;
            if(arr[i]==1002) continue;
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(arr[i]==arr[j]){
                        freq++;
                        arr[j]= 1002;
                    }
                }
            }
            frequency.push_back(freq);
        }
        sort(frequency.begin(), frequency.end());
        for(int i=0;i<frequency.size()-1;i++){
            if(frequency[i]==frequency[i+1]) return false;
        }
        return true;

    }
};
