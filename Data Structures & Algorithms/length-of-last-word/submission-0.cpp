class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = 0, len = 0;
        while(i < n){
            if(s[i] == ' '){
                while(i < n && s[i] == ' ') i++;
                if(i == n){
                    return len;
                }
                len=0;
            }else{
                len++;
                i++;
            }
        }
        return len;
    }
};