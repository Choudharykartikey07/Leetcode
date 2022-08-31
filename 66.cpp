//https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i=n;i>=0;i--){
            digits[i]+=1;
            if(digits[i] != 10)
                return digits;
            else{
                digits[i]=0;
                if(i==0){
                    digits[i]=1;
                    digits.push_back(0);
                    
                }
            }
            
            
        }   
        return digits;
    }
};
