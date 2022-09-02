//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum=INT_MIN;
        for(int i=0;i<sentences.size();i++){
            int count = 1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' ')
                    count++;
            }
            maximum=max(maximum,count);
        }
        return maximum;
    }
};
