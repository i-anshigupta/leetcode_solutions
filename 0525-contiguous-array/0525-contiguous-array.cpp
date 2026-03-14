class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int zero=0,one=0;
        unordered_map<int,int>mp;
        int result=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            else one++;

            int diff=zero-one;
            if(diff== 0){
                result= max(result,i+1);
                continue;
            } 
            if(mp.find(diff)==mp.end()){
                mp[diff]=i;
            }
            else{
                int index=mp[diff];
                int len=i-index;
                result=max(len,result);
            }
            

        }
        return result;
    }
};