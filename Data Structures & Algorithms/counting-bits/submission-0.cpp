class Solution {
public:
    vector<int> countBits(int n) {
        //this problem is same as hamming weight problem
        vector<int> ans;
        for(int i=0; i<=n; ++i){
            int num = i;//copy of i
            int cnt = 0;
            while(num != 0){
                if(num % 2 == 1){ // last binary bit is 1 (count 1's in binary)
                    cnt++;
                }
                num /= 2;// remove the last binary bit
            }
            ans.push_back(cnt);
        }
    return ans;
    }
};
