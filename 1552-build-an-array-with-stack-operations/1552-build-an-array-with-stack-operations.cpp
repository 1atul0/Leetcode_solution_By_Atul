class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int gap=0;
        vector<string>res;
        string p="Push",p1="Pop";
        for(int i=0;i<target.size();i++){
            gap=target[i]-gap-1;
            for(int j=0;j<gap;j++){
                res.push_back(p);
                res.push_back(p1);
            }
            gap=target[i];
            res.push_back(p);
        }
        return res;
    }
};