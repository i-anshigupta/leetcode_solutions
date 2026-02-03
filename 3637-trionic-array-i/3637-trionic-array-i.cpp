class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        const int n=nums.size();
        if (nums[0]>=nums[1] || n<4) return 0;
        int q=0, t=0, i=2;
        for(; i<n && nums[i-1]<nums[i]; i++);
        if (i<n && nums[i-1]==nums[i]) return 0;
        for (; i<n && nums[i-1]>nums[i]; i++);
        if (i<n && nums[i-1]==nums[i]) return 0;
        q=i;
        if (!(q>1 && q<n)) return 0;
        for(; i<n && nums[i-1]<nums[i]; i++);
        t=i;
        return (t==n);
    }
};