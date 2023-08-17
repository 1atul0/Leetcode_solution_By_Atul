class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int a=nums.size()/2;
        for(int i=0;i<nums.size()-1;i++)
        {
            while(i<nums.size()-1 && nums[i]==nums[i+1])
            {
                count++;
                i++;
            }
            if(count>a)
            {
                return nums[i];
            }
            count=1;
        }
        return count;
        
    }
};