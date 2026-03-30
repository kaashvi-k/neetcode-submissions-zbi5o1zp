class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxL(height.size()); 
        vector<int> maxR(height.size()) ; 

        maxL[0] = 0 ; 
        for(int i = 1 ; i < maxR.size() ; i++) {
            maxL[i] = max(maxL[i-1] , height[i-1]); 
        }

        maxR[height.size() - 1] = 0 ; 
        for(int i = height.size()-2 ; i >= 0 ; i--){
            maxR[i] = max(maxR[i+1] , height[i+1]); 
        }


        int trap = 0; 
        for(int i =0 ; i < height.size() ; i++) {
            int t = min(maxL[i] , maxR[i]) - height[i]; 
            if(t<0);
            else trap += t; 
        }


        return trap; 
    }
};
