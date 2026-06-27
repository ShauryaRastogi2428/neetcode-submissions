class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt_1 = 0;
        while(n != 0){
            if(n % 2 == 1){ // last binary bit equals to 1
                cnt_1++;
            }
            n /= 2;// remove the last bit
        }
        return cnt_1;
    }
};
