class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxVolume=0, currVolume;
        while(i<j){
            currVolume = (min(height[i],height[j]))*(j-i);
            maxVolume =  max(currVolume, maxVolume);
            if(min(height[i],height[j])==height[i]) i++;
            else j--;
        }
        return maxVolume;
    }
};
