class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // cout<<nums1.size()<<endl;
        // cout<<m<<endl;
        vector<int>ans;
        int i,j,k;
        i=j=k=0;
        
      
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                ans.push_back(nums2[j]);
                j++;
            }
            else
            {
                ans.push_back(nums1[i]);
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
                
                
        }
        while(i<m)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n )
        {
            ans.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        for(int i=0;i<ans.size();i++)
        {
            nums1.push_back(ans[i]);
        }
        
    }
};