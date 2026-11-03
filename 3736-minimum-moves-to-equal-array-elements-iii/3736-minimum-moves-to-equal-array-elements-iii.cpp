class Solution {
public:
    int minMoves(vector<int>& nums) {
       return nums.size() * *max_element(begin(nums),end(nums)) - accumulate(nums.begin(), nums.end(), 0);
    }
};