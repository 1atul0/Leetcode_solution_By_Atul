class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v;
        vector<vector<int>>ans;
        if(n<3)
        {
            return ans;
        }
        if(nums[0]>0)
        {
            return ans;
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int low=i+1,high=n-1,sum=0;

            while(low<high)
            {
                sum=nums[i]+nums[low]+nums[high];
                if(sum>0)
                {
                    high--;
                }
                else if(sum<0)
                {
                    low++;
                }
                else
                {
                    v.push_back(nums[i]);
                    v.push_back(nums[low]);
                    v.push_back(nums[high]);
                    ans.push_back(v);
                    v.clear();
                    int lastlowoccurence=nums[low],lasthighoccurence=nums[high];
                    while(low<high && nums[low]==lastlowoccurence)
                    {
                        low++;
                    }
                    while(low<high && nums[high]==lasthighoccurence)
                    {
                        high--;
                    }
                }
            }
            

        }
        return ans;
        
    }
};