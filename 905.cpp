//https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int ws=0,temp,we;
        for(we=0;we<nums.size();we++){
            if(nums[we]%2==0){
                temp=nums[ws];
                nums[ws]=nums[we];
                nums[we]=temp;
                ws++;
            }
        }
        return nums;
        
    }
};
