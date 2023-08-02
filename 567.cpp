class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> v1 (26, 0);
        for (auto c : s1) v1[c - 'a']++;
        vector<int> v2 (26, 0);
        int l = 0, r = 0;
        while (r < s2.size()) {
            v2[s2[r]-'a']++;
            if (r - l + 1 == s1.size()) 
                if (v1 == v2) return true;
            if (r - l + 1 < s1.size()) r++;
            else {
                v2[s2[l]-'a']--;
                l++;
                r++;
            }
        }
        return false;
    }
};