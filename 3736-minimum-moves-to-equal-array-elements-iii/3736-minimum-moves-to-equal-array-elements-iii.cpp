class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(begin(nums),end(nums));
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=maxi-nums[i];
        }
        return sum;
    }
};