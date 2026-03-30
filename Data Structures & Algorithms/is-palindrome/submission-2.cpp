class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0 ; 
        int end = s.size()-1; 

        while(end > start) {
            while(!isalnum(s[start]) && start < end ) start ++ ; 
            while(!isalnum(s[end]) && start < end) end -- ; 
            if(tolower(s[end]) != tolower(s[start])) return false ; 
            start ++; 
            end --; 
        }

        return true;
    }
};
