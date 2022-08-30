//https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ws=0,we,temp;
        for(we=0;we<nums.size();we++){
            if(nums[we] != 0){
                temp = nums[ws];
                nums[ws] = nums[we];
                nums[we] = temp;
                ws++;
                    
            }
        }
        
    }
};
