class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> v(k);
        v[0]=1;
        int count=0;
        int prefix_sum=0;
        for(int i=0;i<nums.size();i++){
            prefix_sum=(nums[i]%k+prefix_sum+k)%k;
            
            count+=v[prefix_sum]++;
        }
        return count;
    }
};