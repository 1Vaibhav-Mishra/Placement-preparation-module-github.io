class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(),hours.end());
        int n= size(hours);
        int f= lower_bound(hours.begin(),hours.end(),target)-hours.begin();
        int ans=n-f;
        return ans;
        
    }
};