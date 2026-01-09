class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";

        for (int center = 0; center < n; center++) {

            // Odd length palindrome
            int i = center, j = center;
            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > ans.size())
                    ans = s.substr(i, j - i + 1);
                i--;
                j++;
            }

            // Even length palindrome
            i = center;
            j = center + 1;
            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > ans.size())
                    ans = s.substr(i, j - i + 1);
                i--;
                j++;
            }
        }
        return ans;
    }
};
