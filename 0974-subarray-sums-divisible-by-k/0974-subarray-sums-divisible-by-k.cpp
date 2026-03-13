class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int remain,result=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            remain=(sum%k + k)%k;
            result += mp[remain];
            mp[remain]++;
        }
        
        return result;
    }
    
};