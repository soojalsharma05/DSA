class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Sorting is the brute force approach
        int sum=0;
        int arrsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum = sum + i;
            arrsum = arrsum + nums[i];

        }
        sum = sum + n;
        return sum - arrsum;
    }
};