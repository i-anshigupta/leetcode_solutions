class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int m = a.size(), n = b.size(), t = m + n;
        int i=0, j=0, curr=0, prev=0;

        for(int x=0; x<=t/2; x++){
            prev = curr;
            if(i<m && (j>=n || a[i]<=b[j])) curr = a[i++];
            else curr = b[j++];
        }
        return (t % 2 == 1) ? curr : (prev + curr) / 2.0;
    }
};