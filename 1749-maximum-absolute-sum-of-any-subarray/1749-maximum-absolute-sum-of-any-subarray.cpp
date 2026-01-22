class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        if(arr.size()==1) return abs(arr[0]);
        int bestMin=arr[0];
        int bestMax=arr[0];
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            bestMin=min(bestMin+arr[i],arr[i]);
            bestMax=max(bestMax+arr[i],arr[i]);
            ans=max(abs(bestMin),max(bestMax,ans));
        }
        return abs(ans);
        
    }
};