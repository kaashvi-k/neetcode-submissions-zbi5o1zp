class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1_freq(26, 0); 
         

        for(int i = 0; i < s1.size() ; i++) {
            s1_freq[s1[i] - 'a']++; 
        }

        int l = 0 ; 
        int window = s1.size();
        
        while(l + window <= s2.size()){
            vector<int> s2_freq(26, 0);

            for(int i = l; i < (l + window)  ; i++) {
                s2_freq[s2[i] - 'a'] ++;
            }

            if(s2_freq == s1_freq) return true; 
            else l++;
        }

        return false; 
    }
};
