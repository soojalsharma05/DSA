class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n= nums.size();
        // if(n==1) return -1;
        // if(n==2) return -1;
        vector<int> arr(n);
        vector<int> srr(n);
        arr[0]=nums[0];
        srr[n-1]=nums[n-1];
        for(int i =1;i<n;i++){
            arr[i]=arr[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--){
            srr[i]=srr[i+1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==srr[i]) return i;
        }
        return -1;
    }
};