//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=1;i<nums.size()+1;i++){
            if(m[i]==0){
                v.push_back(i);
            }
        }
        return v;    
        
    }
};
