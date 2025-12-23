class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>n;

        for(int i=0;i<=nums.size();i++){
            int x=target-nums[i];
            if(n.find(x)!=n.end()){
                return{n[x],i};
            }
            n[nums[i]]=i;
        }
        return{};
    }
};