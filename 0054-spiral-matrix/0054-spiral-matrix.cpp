class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int srow=0,erow=matrix.size()-1,scol=0,ecol=matrix[0].size()-1;
        vector<int>v;
        while(srow<=erow || scol<=ecol)
        {
            //first row
            for(int i=scol;i<=ecol and scol<=ecol and srow<=erow;i++)
            {
                v.push_back(matrix[srow][i]);

            }
            srow++;
            //last column
            for(int i=srow;i<=erow and scol<=ecol and srow<=erow;i++)
            {
                v.push_back(matrix[i][ecol]);
            }
            ecol--;
            //last row
            for(int i=ecol;i>=scol and scol<=ecol and srow<=erow;i--)
            {
                v.push_back(matrix[erow][i]);
            }
            erow--;
            //first column
            for(int i=erow;i>=srow and scol<=ecol and srow<=erow;i--)
            {
                v.push_back(matrix[i][scol]);
            }
            scol++;


        }
        return v;
        
    }
};