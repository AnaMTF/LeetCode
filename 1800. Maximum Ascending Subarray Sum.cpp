/*Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.

A subarray is defined as a contiguous sequence of numbers in an array.

A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi  < numsi+1. Note that a subarray of size 1 is ascending.*/

using namespace std;
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0];
        int sumInit = nums[0];
        for (int i=1; i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                sumInit += nums[i];   
            }
            else{
                maxSum = max(maxSum, sumInit);
                sumInit = nums[i];
            }
        }
        maxSum = max(maxSum, sumInit);
        return maxSum;
    }
};
