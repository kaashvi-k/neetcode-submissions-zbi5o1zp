class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, 0);

        int start = 0;
        int maxLen = 0;

        for (int end = 0; end < s.size(); end++) {

            while (hash[s[end]] == 1) {
                hash[s[start]] = 0;
                start++;
            }

            // Add current character
            hash[s[end]] = 1;

            // Update max length
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};