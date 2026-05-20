class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 ; 
        int right = nums.size() -1; 

        while(left < right) {
            int mid = left + (right - left)/2; 

            if(nums[right] < nums[mid]) {
                left = mid + 1; 
            }

            else right = mid; 
            
        }

        int min = nums[left]; 
        int ind = left ; 

        left = 0; 
        right = nums.size() - 1; 

        if(target == min) return ind; 

        else if (ind == 0) {
            right = nums.size() - 1; 
        }
        else if(target >= nums[0]) {
           right = ind - 1; 
        }

        else if(target <= nums[nums.size() - 1] && target >= min) {
            left = ind; 
        }


        while(left <= right) {
            int mid = left + (right - left)/2; 

            if(nums[mid] == target) return mid; 

            else if(nums[mid] < target) {
                left = mid + 1; 
            }

            else right = mid - 1; 
        }

        
        return -1 ; 
    }

};
