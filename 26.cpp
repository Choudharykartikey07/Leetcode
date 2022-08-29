//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr1=0;
        int ptr2=1;
        while(ptr2<nums.size()){
            if(nums[ptr1]!=nums[ptr2]){
                     
                nums[ptr1 + 1]=nums[ptr2];
                ptr1++;
                
            }
            ptr2++;
        }
        return ptr1+1;
        
    }
};
