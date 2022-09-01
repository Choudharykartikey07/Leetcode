//https://leetcode.com/problems/richest-customer-wealth/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0,sum;
        
        for(int i=0;i<accounts.size();i++){
            sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
            if(sum>m){
                m=sum;
            }
            sum=0;
        }
        return m;
    }
};
