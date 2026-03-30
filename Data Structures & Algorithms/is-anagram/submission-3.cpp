class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        vector<int> l1(26, 0);
        vector<int> l2(26, 0);

        for (int i = 0; i < s.size(); i++) {
            l1[s[i] - 'a']++;
        }

        for (int i = 0; i < t.size(); i++) {
            l2[t[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (l1[i] != l2[i]) return false;
        }

        return true;
    }
};
