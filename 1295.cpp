//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int flag=0,number,rem,count;
        for(int i=0;i<nums.size();i++){
            number=nums[i];
            count=0;
            while(number>0){
                number=number/10;
                count +=1;}
            if(count % 2 == 0)
                flag ++;
                
            
        }
        return flag;
    }
};
