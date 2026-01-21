class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestMin=nums[0];
        int bestMax=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=nums[i]*bestMin;
            int v2=nums[i]*bestMax;
            int v3=nums[i];
            bestMin=min(v3,min(v1,v2));
            bestMax=max(v3,max(v1,v2));
            res=max(res,max(bestMin,bestMax));
        }
        return res;  
    }
};