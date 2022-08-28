//https://leetcode.com/problems/subarray-product-less-than-k/
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ws=0,we,product=1,count=0;
        for(we=0;we<nums.size();we++){
            product *= nums[we];
            while(ws<=we && product>=k){
                product /= nums[ws];
                ws++;
            }
            if(product<k){
                count += (we-ws+1);
            }
        }
        return count;
        
    }
};
