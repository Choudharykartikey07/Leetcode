//https://leetcode.com/problems/check-if-n-and-its-double-exist/
class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[i] == 2 * nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
