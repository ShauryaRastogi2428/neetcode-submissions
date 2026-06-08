class Solution {
public:
    int countOdds(int low, int high) {
        int cnt_odd = 0;
        for(int i=low; i<=high; i++){
            if(i % 2 != 0){
                cnt_odd++;
            }
        }
        return cnt_odd;
    }
};