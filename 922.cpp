//https://leetcode.com/problems/sort-array-by-parity-ii/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int ptr1=0,ptr2=1;
        while(ptr1<nums.size() && ptr2<nums.size()){
            if(nums[ptr1]%2==0){
                ptr1 +=2;
            }
            else if(nums[ptr2]%2==1){
                ptr2 +=2;
            }
            else{
                swap(nums[ptr1],nums[ptr2]);
            }
        }
        return nums;
        
    }
};
