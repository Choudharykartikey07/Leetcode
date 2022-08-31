//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ws=0,we,maxLength=0;
        char left,curr;
        map<char,int> m;
        for(we=0;we<s.size();we++){
            curr=s[we];
            if(m.find(curr) != m.end()){
                ws=max(ws,m[curr]+1);
            }
            m[curr]=we;
            maxLength=max(maxLength,we-ws+1);   
        }
        return maxLength;
        
        
    }
};
