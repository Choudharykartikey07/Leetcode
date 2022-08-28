//https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ws=0,we,minimum=INT_MAX,mini;
        for(we=0;we<nums.size();we++){
            if(we>=k-1){
                mini=nums[we]-nums[ws];
                minimum=min(mini,minimum);
                ws++;
            }
        }
        return minimum;    
    }
};
