class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>s;
        vector<int>ans;
        s.insert({nums[0],0});
        for(int i=1;i<nums.size();i++){
            if(s.find(target-nums[i])!=s.end())
            {
                ans.push_back(s[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            s.insert({nums[i],i});
        }
        return ans;
        
    }
};