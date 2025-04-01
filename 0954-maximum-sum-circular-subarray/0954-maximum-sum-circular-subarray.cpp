class Solution {
public:
    int maxSubarraySumCircular(vector<int>& v) {
    int n=v.size();
    int res1=v[0];
    int maxEnding=v[0];
    int totalSum=v[0];
    for(int i=1;i<n;i++){
        totalSum+=v[i];
        maxEnding=max(maxEnding+v[i],v[i]);
        res1=max(maxEnding,res1);
    }
    if(res1<0)return res1;
    int minEnding=v[0];
    int res2=v[0];
    for(int i=1;i<n;i++){
        minEnding=min(minEnding+v[i],v[i]);
        res2=min(minEnding,res2);
    }
    return max(res1,totalSum-res2);
    }
};