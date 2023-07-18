class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        // ans[0].push_back(intervals[0][0]);
        // ans[0].push_back(intervals[0][1]);
         int i=0;
        sort(intervals.begin(),intervals.end());
        for(i=0;i<intervals.size();i++)
        { if(ans.empty()||intervals[i][0]>ans.back()[1])
        {
            ans.push_back(intervals[i]);
        }
            else 
            {
               ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
            
        }
        return ans;
    }
};