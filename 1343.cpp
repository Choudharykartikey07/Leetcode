//https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,ws=0,we,count=0;
        double average;
        for(we=0;we<arr.size();we++){
            sum +=arr[we];
            if(we>=k-1){
                average= sum/k;
                if(average>=threshold){
                    count++;
                }
                sum -= arr[ws];
                ws++;
            }
        }
        return count;
        
    }
};
