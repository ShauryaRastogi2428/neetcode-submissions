class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt_1 = 0;
        while(n != 0){
            if(n % 2 == 1){
                cnt_1++;
            }
            n /= 2;
        }
        return cnt_1;
    }
};
