class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        bool ok = false;
        for(int i=0; i<n; ++i){
            if(nums[i] == nums[i+1]){
                ok = true;
            }else{
                continue;
            }
        }
        if(ok) return true;
        return false;
    }
};