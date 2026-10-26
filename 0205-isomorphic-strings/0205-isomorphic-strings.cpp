class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> one,two;
        for (int i=0;i<s.size();i++){

            // count = 0 makes it false and adds it dirctly to the map
            // != -> just proves it is already there but not equal to this char

            if (one.count(s[i]) && one[s[i]] != t[i]) return false;
            if (two.count(t[i]) && two[t[i]] != s[i]) return false;
            // need two map to compare isomorphoic both ways

            one[s[i]] = t[i];
            two[t[i]] = s[i];

        }
        return true;
        
    }
};