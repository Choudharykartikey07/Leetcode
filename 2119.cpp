//https://leetcode.com/problems/a-number-after-a-double-reversal/
class Solution {
public:
    int reverse(int num){
        int d_num=num;
        int rev=0,rem=0;
        while(d_num>0){
            rem=d_num%10;
            rev=rev*10+rem;
            d_num=d_num/10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int o_num,k_num;
        o_num=reverse(num);
        k_num=reverse(o_num);
        if(num==k_num)
            return true;
        else
            return false;
    }
};
