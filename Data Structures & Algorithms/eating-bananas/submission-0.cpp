class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxk = *max_element(piles.begin() , piles.end());
        int mink = 1; 
        int mid = maxk; 
        int ans = mid; 

        while(mink <= maxk){
            int mid = mink + (maxk - mink) / 2;
            long long time = 0 ; 
            
            for(int i = 0 ; i < piles.size() ; i++) {
                time += (piles[i] + mid - 1) / mid;
            }

            if(time > h){
                mink = mid + 1 ; 
            }

            else if(time <= h){
                ans = mid;
                maxk = mid -1 ; 
            }

        } 

        return ans;
    }
};
