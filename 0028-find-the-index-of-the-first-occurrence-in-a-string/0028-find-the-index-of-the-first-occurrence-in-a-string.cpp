class Solution {
public:
    int strStr(string h, string needle) {
       int idx=INT_MAX;
        int n=needle.size();
        for(int i=0;i<h.size();i++)
        {
           string s=h.substr(i, n);
            if(s==needle)
            {
                return i;
            }
                
        }
        return -1;
    }
};