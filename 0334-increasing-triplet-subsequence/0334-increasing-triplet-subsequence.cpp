
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstValue = INT_MAX;
        int secondValue = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] <= firstValue){
                firstValue = nums[i];
            } else if (nums[i] <= secondValue){
                secondValue = nums[i];
            } else{
                return true;
            }
        }
        
        return false;
    }
};
