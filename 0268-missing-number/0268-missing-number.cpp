class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxx=nums.size();
        for(int i=0;i<=maxx;i++)
        {
            if(i==maxx||nums[i]!=i)
                return i;
            else
                continue;
        }
        return -1;
    }
};