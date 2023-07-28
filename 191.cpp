class Solution {
public:
    int hammingWeight(uint32_t x) {
        int count;
        for (count=0; x; count++)
        x &= x - 1;
        return count;
    }
};