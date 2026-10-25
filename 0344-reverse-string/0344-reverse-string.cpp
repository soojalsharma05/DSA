class Solution {
public:
    // Better approach
    // if (i >= j) return;
    void reverseS(vector<char>&s, int i,int n){
        if(i==int(floor(s.size()/2))) return;
        swap(s[i],s[n-1]);
        reverseS(s,++i,n-1);
    }
    void reverseString(vector<char>& s) {
        int n=s.size();
        reverseS(s,0,n);
    }
};