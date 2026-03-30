class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int words = strs.size() ;
        map<vector<int>, vector<string>> mp;
         

        for(int i = 0 ; i < words ; i++) 
        {
            vector<int> letters(26,0);
            for(int ch = 0 ; ch < strs[i].size() ; ch ++){
                letters[strs[i][ch] - 'a'] ++ ;
            }

            mp[letters].push_back(strs[i]);
        }


        vector<vector<string>> sol;
        for (auto &entry : mp) {
            sol.push_back(entry.second);
        }

        return sol;
    }
};
