
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> ans;
        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++){
            ans.push_back(nums2[i]);
        }

        sort(ans.begin(),ans.end());
        int n = ans.size();
        if(n%2 != 0){
            return ans[n/2];
        }else{
            return (ans[n/2]+ans[n/2 -1])/2;
        }
    }
};
