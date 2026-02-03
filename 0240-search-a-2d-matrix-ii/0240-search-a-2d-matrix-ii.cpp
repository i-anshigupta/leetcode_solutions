class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int r=0, c=m-1;
        if(n==0) return false;

        while(r<n && c>=0){
            if(target==mat[r][c]) {
                return true;
            }
            else if(target< mat[r][c])  c--;
            else  r++;
        }
        return false;

    }
};