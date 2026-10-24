class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> fre;
        for (int i = 0; i < nums.size(); i++) {
            fre[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (fre.find(temp) != fre.end() && fre[temp] != i) {
                return {i, fre[temp]};
            }
        }
        return {};
    }
};