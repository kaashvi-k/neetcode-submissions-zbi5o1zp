class Solution {
public:
    string encode(vector<string>& strs) {
        string s = "";
        for (auto &it : strs) {
            s += to_string(it.size());
            s += 'A';   // delimiter
            s += it;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        int i = 0;

        while (i < s.size()) {
            // 1. Read length
            int j = i;
            while (s[j] != 'A') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            // 2. Read the string
            string str = s.substr(j + 1, len);
            sol.push_back(str);

            // 3. Move pointer
            i = j + 1 + len;
        }

        return sol;
    }
};
