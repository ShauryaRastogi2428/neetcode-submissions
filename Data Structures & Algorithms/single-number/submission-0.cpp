class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int Xor = 0;
        for(int x: nums){
            Xor ^= x;
        }
        return Xor;
    }
};
