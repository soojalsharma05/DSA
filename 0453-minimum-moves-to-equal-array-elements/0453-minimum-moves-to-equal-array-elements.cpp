class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mn=min(mn,nums[i]);
        }
        // long long int ans; -> it gives wrong answer
        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i]-mn;
        }
        return ans;
    }
};