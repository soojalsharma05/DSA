class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        nums.clear();
       
        int k=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto[key,value]:mp){
            k++;
            nums.push_back(key);
        }
        return k;
    }
};