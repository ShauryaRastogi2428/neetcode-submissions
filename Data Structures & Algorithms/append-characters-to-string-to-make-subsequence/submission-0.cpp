class Solution {
public:
    int appendCharacters(string s, string t) {
        //2 pointers -> make t subsequence of s
        int i=0, j=0;
        while(i < s.size() && t.size()){
            //match
            if(s[i] == t[j]){
                i++;
                j++;
            }else{
                i++;//no match only move in s
            }
        }
        return t.size() - j;
    }
};