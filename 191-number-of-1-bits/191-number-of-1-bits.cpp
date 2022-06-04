class Solution {
public:
    int hammingWeight(uint32_t n) \
    {
        int N=__builtin_popcount(n);
        return N;
        
    }
};