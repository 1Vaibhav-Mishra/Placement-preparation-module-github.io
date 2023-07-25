class Solution {
public:
    bool isValid(string s) 
    {   int ans=0;
     stack<char>st;
        unordered_map<char,int>m={{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
     for(int i=0;i<s.size();i++)
        {   if(m[s[i]]<0)
            st.push(s[i]);
         else
         {
              if(st.empty())
                 return 0;
            char top=st.top();
             st.pop();
             if(m[top]+m[s[i]]!=0)
                 return 0;
         }
         
         }    
    if(st.empty())
        return 1;
     else
         return 0;
        
    }
};