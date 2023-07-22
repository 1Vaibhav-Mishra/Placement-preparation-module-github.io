class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
       int arr[26];
        memset(arr, 0, sizeof(arr));
        for(auto ch: magazine){
            arr[ch-'a']++;
        }
        for(auto ch: ransomNote){
            if(arr[ch-'a']==0)
                return false;
            arr[ch-'a']--;
        }
        return true;
    }
};
