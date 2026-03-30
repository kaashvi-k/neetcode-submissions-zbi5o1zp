class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s ; 

        for(auto i : nums){
            s.insert(i) ; 
        }

        int maxi = 0 ;
        int count = 0  ;  

        for(auto i : nums) {
            if(s.count(int(i-1))) continue ; 
            else {
                count = 0 ; 
                while(s.count(int(i))) {
                    count ++;
                    i++;
                }
            }

            maxi = max(maxi , count) ; 
        }


        return maxi ; 

    }
};
