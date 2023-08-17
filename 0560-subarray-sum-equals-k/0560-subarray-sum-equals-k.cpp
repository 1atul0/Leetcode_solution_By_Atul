class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int prefix_sum=0;
       unordered_map<int,int>v;
       v[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            int index=prefix_sum-k;
            count+=v[index];
            v[prefix_sum]++;
            
        }
        return count;
    }
};