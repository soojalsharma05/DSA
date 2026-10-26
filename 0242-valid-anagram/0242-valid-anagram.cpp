class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> one,two;
        for (int i=0;i<s.size();i++){
            one[s[i]]++;
            two[t[i]]++;

        }
        for (auto it = one.begin(); it != one.end(); ++it) {
            // != -> it is used here as we don't need to assume and return true halfway through
            // but we can return false halfway
            if(two[it->first]!=it->second) return false;
        }
        return true;
    }
};
// can do better with a single map