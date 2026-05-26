#include <algorithm> 
class Solution {
public:
    void remove(std::vector<int>& heap, int value) {
    auto it = std::find(heap.begin(), heap.end(), value);
    
    if (it != heap.end()) {

        heap.erase(it);
        
        // 3. Rebuild the heap structure
        std::make_heap(heap.begin(), heap.end());
        }
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0 ; 
        int r = k-1; 
        
        vector<int> window; 
        vector<int> maxElem; 

        for(int i = 0; i < k ; i++) {
            window.push_back(nums[i]); 
        }

        make_heap(window.begin(), window.end());


        while(r < nums.size()-1){
            maxElem.push_back(window[0]);
            remove(window, nums[l]) ;
            l++;
            r++;
            window.push_back(nums[r]); 
            push_heap(window.begin() , window.end()); 
            
        }
        maxElem.push_back(window[0]);
        return maxElem;
    }
};
