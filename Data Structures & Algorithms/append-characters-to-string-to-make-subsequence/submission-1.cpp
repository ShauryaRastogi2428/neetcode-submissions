class Solution {
public:
    int appendCharacters(string s, string t) {
        //2 pointers -> make t subsequence of s
        int i=0, j=0;
        while(i < s.size() && t.size()){
            //match -> both move 
            if(s[i] == t[j]){
                i++;
                j++;
            }else{
                i++;//no match only move in s
            }
        }
        //characters left in t are the ones we need to append
        return t.size() - j;
    }
};