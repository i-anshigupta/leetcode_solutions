class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
       
        int n=nums.size();
        vector<int> result(n);
        int newIndex;
        for(int i=0;i<n;i++){
            long long x=nums[i];
            long long newIndex= ((i+x)%n+n)%n;
            result[i]=nums[newIndex];
        }
        return result;
    }
} ;