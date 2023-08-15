class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        if(n<3){
            return res;
        }
        sort(nums.begin(),nums.end());
        if(nums[0]>0)return res;
        for(int i=0;i<n;i++){
            if(nums[i]>0){break;}
            if(i>0 and nums[i]==nums[i-1]){continue;}
            int front=i+1,back=n-1;
            while(front<back)
            {
                int sum=nums[i]+nums[front]+nums[back];
                if(sum>0){
                    back--;
                }
                else if(sum<0){
                    front++;
                }else{
                    vector<int>trp={nums[i],nums[front],nums[back]};
                    res.push_back(trp);
                    int last_front_occurence=nums[front];
                    int last_back_occurence=nums[back];
                    while(front<back && nums[front]==last_front_occurence){
                        front++;
                    }

                    while(front<back && nums[back]==last_back_occurence){
                        back--;
                    }
                }
            }
        }
        return res;
    }
};