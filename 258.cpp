//https://leetcode.com/problems/add-digits/
class Solution {
public:
    int addDigits(int num) {
         int rem=0,res=0;
        while(num>9){
            
            while(num>0){
                rem = num % 10;
                
                res = (res + rem);
                num = num / 10;
            }
            num=res;
            res=0;
        }
        return num;
    }
};
