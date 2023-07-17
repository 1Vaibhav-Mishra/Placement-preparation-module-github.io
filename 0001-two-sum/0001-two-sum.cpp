class Solution {
public:
    /*  Firstly create a copy of vector nums  along with position of each element
    
        sort the new vector 
        
        in this problem we used two pointers pointing to starting and end of the vector v
    
        now we add the two values pointed out by the two pointers
        
        if the sum we get is less than the target thenn the left pointer is incremented or else the
        
        right pointer is decremented
        
        and the same steps is folllowed till we find the target 
        
        idf the target is not found return -1
    */
    vector<int> twoSum(vector<int>& nums, int target) 
    { vector<pair<int,int>> v;
     for(int  k=0;k<nums.size();k++)
     {
         v.push_back({nums[k],k});
     }
      sort(v.begin(),v.end());
      int i,j;
      i=0;
      j=nums.size()-1;
      
          while(i<j)
          {
              if(v[i].first+v[j].first==target)
                  return {v[i].second,v[j].second};
              else
                  if(v[i].first+v[j].first>target)
                      j--;
              else
                  i++;
          }
        return{-1,-1};
    }
};