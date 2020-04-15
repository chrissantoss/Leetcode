class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int toReturn = 0;
        
        for(int val : nums){
            toReturn ^= val;
        }
        
        return toReturn;
    }
};
