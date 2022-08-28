//https://leetcode.com/problems/maximum-average-subarray-i/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ws=0,we,sum=0,maximum=INT_MIN;
        //this for loop will be used to iterate the whole array
        for(we=0;we<nums.size();we++){
            //we will add the value in windows till the size of k
            sum+=nums[we];
            //in this condition we will add the next value and subtract the first value in the window
            if(we>=k-1){
                maximum=max(maximum,sum);
                sum -= nums[ws];
                ws +=1;
            }
        }
        return maximum/k;
        
    }
};
