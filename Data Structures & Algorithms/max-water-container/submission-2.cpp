class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 ; 
        int j = heights.size() - 1; 

        int area = 0 ;
        
        while(i < j) {
            int a = (j-i)*min(heights[i] , heights[j]) ; 

            area = max(a , area); 
            if(heights[i] <= heights[j]) i++; 
            else j --; 
        }
        

        return area; 


    }
};
