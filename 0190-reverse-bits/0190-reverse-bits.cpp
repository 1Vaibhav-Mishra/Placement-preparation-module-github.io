class Solution {
public:
    uint32_t reverseBits(uint32_t n)
    {int ans=0;
     for(int i=0;i<32;i++)
     {
         int lsb=n&1;
         int revlsb=lsb<<(31-i);
         ans=ans|revlsb;
         n=n>>1;
     }
        return ans;
    }
};