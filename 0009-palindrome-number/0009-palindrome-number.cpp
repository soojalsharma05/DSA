class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if (x==0) return true;
        int temp = x ;
        string reverse;
        while(temp!=0){
            reverse += to_string(temp%10);
            temp = temp/10;
        }
        string y = to_string(x);
        return y==reverse;
        
    }
};