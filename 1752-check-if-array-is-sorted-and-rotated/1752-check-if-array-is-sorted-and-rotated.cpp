class Solution {
public:
    bool check(vector<int>& nums) {
        // % -> just helps in checking the first element from last
        // which my code missed -> another simple check could have saved my code->
        // if (nums[n-1] > nums[0]) count++;
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};