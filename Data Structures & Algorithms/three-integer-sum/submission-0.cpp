class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ; 
        vector<vector<int>> result;
        for(int i = 0 ; i < (int)nums.size() - 2 ; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int target = 0 - nums[i] ; 
            int first = i+1; 
            int last = nums.size() - 1; 

            while(first < last) {
                int sum = nums[first] + nums[last] ; 

                if(sum == target) {
                    result.push_back({nums[i] , nums[first] , nums[last]});
                    while (first < last && nums[first] == nums[first+1]) first++;
                    while (first < last && nums[last] == nums[last-1]) last--;
                    first++;
                    last--;
                } 
                else if(sum < target) first ++; 
                else last --;
            }
        }

        return result; 
    }
};