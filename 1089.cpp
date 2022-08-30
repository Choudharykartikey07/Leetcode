//https://leetcode.com/problems/duplicate-zeros/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int ptr1=0,ptr2;
        while(ptr1<arr.size()-1){
            if(arr[ptr1]==0){
                ptr2=arr.size()-1;
                while(ptr2>ptr1){
                    arr[ptr2]=arr[ptr2-1];
                    ptr2--;
                }
                ptr1++;
            }
            ptr1++;
        }
    }
};
