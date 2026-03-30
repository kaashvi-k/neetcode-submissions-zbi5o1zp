class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f = 0 ; 
        int l = nums.size() -1; 

        while(f<=l) {
            int mid = (f+l)/2;
            if(nums[mid] == target) return mid; 

            if(nums[mid] < target) {
                f = mid+1 ; 
            }

            if(nums[mid] > target){
                l = mid-1;
            }
        }

        return -1;
    }
};
