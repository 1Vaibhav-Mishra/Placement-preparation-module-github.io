class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {   int cnt=0;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if(*it==0)
            {
                nums.erase(it);
                it--;
                cnt++;
            }
        }
            
     while(cnt>0)
     {
         nums.push_back(0);
         cnt--;
     }
        
            
   
        
    }
};