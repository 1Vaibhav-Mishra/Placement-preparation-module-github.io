class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int ans=1;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto x:s){
            if(s.find(x-1)==s.end())
            {
               int cnt=1;
                int it=x;
                while(s.find(it+1)!=s.end())
                {
                    cnt++;
                    it++;
                }
                  ans=max(ans,cnt);
            }
           
        }
        return ans;
    }
};