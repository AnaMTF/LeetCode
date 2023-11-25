class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums.size();
        vector<int> ans(n);
        for(int i=1; i<n; ans[0]+=nums[i++]-nums[0]) {}
        for(int i=1; i<n; ++i) {
            ans[i]=ans[i-1]+(i+i-n)*(nums[i]-nums[i-1]);
        }        
        return ans;
    }
};