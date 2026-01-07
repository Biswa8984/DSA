class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        for (char d : t) {
            if (mp.find(d) != mp.end()) {
                mp[d]--;
            } else {
                return false;
            }
        }
        for (auto e : mp) {
            if (e.second != 0)
                return false;
        }
        return true;
    }
};