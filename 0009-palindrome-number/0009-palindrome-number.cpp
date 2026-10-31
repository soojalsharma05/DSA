class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0;
        int temp=x;
        while(temp!=0 && temp>0){
            rev= rev*10 + temp%10;
            temp /= 10;
        }
        return rev == x;
        
    }
};