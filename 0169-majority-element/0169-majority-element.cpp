class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=floor(nums.size()/2);
        return nums[n];
        
    }
};