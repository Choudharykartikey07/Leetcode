//https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ws=0,we,sum=0,min_length=INT_MAX;
        for(we=0;we<nums.size();we++){
            sum += nums[we];

            while(sum>=target){
                min_length = min(min_length,we-ws+1);
                sum -= nums[ws];
                ws++;
            }
        }
        if(min_length==INT_MAX){
            return 0;
        }
        return min_length;
        
    }
};
