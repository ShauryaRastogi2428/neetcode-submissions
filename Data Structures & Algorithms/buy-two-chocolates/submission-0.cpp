class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());
        int ans;
        int cur = prices[0];
        for(int i=1; i<n; ++i){
            if(cur + prices[i] <= money){
                ans = money - (cur + prices[i]);
                break;
            }else{
                ans = money;
            }
        }
        return ans;
    }
};