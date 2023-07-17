class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int curr=0;
        int maximum=0;
        if(prices.size()==1)
            return 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
                buy=prices[i];
            curr=prices[i]-buy;
            maximum=max(maximum,curr);
            
        }
        return maximum;
    }
};
 