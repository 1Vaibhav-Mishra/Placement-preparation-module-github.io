class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26];
        memset(arr,0,sizeof(arr));
       for(int i=0;i<s.size();i++)
       {
           arr[s[i]-'a']++;
       }
          for(int i=0;i<t.size();i++)
          {
              if(arr[t[i]-'a']==0)
                  return false;
              else
                  arr[t[i]-'a']--;
          }
        for(auto x:arr)
        {
            if(x>0)
                return false;
        }
        
        return true;
    }
};