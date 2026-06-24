class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; ++i){
            mp[arr[i]]++;
        }
        int maxi = 0;
        bool ok = false;
        for(auto &it: mp){
            int ele = it.first;
            int freq = it.second;
            if(freq == ele){
                maxi = max(maxi, ele);
                ok = true;
            }
        }
        if(!ok) return -1;
        else return maxi;
    }
};