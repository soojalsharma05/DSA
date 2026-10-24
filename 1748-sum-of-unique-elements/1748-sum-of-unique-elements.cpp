class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            // freq[nums[i]]=freq[nums[i]]+1
            freq[nums[i]]++;
        }
        auto it = freq.begin();
        while(it != freq.end()){
            if (it-> second ==1) sum = sum + it->first;
            ++it;
        }
        return sum;
    }
};