//https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int x;
        double y;
        double b = 2;
        if(m>n){
            for(int i=0;i<n;i++){
                nums1.push_back(nums2[i]);
            }
            sort(nums1.begin(),nums1.end());
            x=(m+n)/2;
           
            if((m+n)%2==0){ 
                y=(nums1[x] + nums1[x-1])/b;
                
                return y;}
            else              
                return nums1[x];
            
        }
        else{
            for(int i=0;i<m;i++){
                nums2.push_back(nums1[i]);
            }
            sort(nums2.begin(),nums2.end());
            x=(m+n)/2;
            if((m+n)%2==0){
                y=(nums2[x] + nums2[x-1])/b;
                return y;}
            else              
                return nums2[x];
        }
        return 0;
    }
};
