//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        double rev=0;
        int rem;
        while(y>0){
            rem = y%10;
            rev = rev*10+rem;
            y=y/10;
        }
        if(rev==x){
            return true;
        }
        return false;
        
    }
};
