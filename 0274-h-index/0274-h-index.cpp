class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(),citations.rend());
        int n=citations.size();
        int h=0;
       while(h<n && citations[h]>h){
           h++;
       }
       return h;
        
    }
};