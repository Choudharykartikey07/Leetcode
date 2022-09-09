//https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,we,maximum=INT_MIN;
        for(int we=0;we<nums.size();we++){
            if(nums[we]==1){
                count+=1;
            }
            else
                count=0;
            maximum=max(maximum,count);
        }
        return maximum;
    }
};
