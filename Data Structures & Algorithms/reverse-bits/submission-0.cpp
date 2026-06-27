class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        /*
        get last bit => n & 1
        remove last bit => n >> 1
        make space for new bit => res << 1*/
        uint32_t ans = 0;
        for(int i=0; i<32; ++i){
            //get last bit
            int bit = n & 1;
            //make space for new bit and add bit
            ans = (ans << 1) | bit;
            //remove the last bit
            n = n >> 1;
        }
        return ans;
    }
};
