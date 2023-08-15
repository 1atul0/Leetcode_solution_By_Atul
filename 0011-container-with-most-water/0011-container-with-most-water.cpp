class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int area=0;
        while(i<j){
            int mn=min(height[i],height[j]);
            area=max(area,mn*(j-i));
            if(height[i]<=mn && i<j){
                i++;
            }
            if(height[j]<=mn && i<j){
                j--;
            }
        }
        return area;
    }
};