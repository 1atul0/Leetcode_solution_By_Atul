class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=0,count=1;
        for(int i=1;i<n;i++){
            if(nums[res]==nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                res=i;
                count=1;
            }
        }
        //if majority element not exist always 
        count=0;
        for(int i=0;i<n;i++){
            if(nums[res]==nums[i])count++;
        }
        if(count<=n/2)return -1;
        return nums[res];
    }
};