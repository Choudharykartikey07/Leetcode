//https://leetcode.com/problems/happy-number/
class Solution {
public:
    int squareSum(int n){
        int sum=0;
        while(n>0){
            sum+=((n%10)*(n%10));
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int temp=n;
        while(true){
            if(temp==89)
                return false;
            if(temp==1)
                return true;
            temp=squareSum(temp);
        }
    }
};
