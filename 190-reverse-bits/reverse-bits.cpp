class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0, count = 32;
        while(count)
        {
            result += n &1;
            count--;
            n>>=1;
            if(count) result<<=1;
        }
        return result;
    }
};