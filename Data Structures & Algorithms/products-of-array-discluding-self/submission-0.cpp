class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> before(n) ; 
        vector<int> after(n) ; 
        vector<int> sol(n); 

   

        before[0] = nums[0];
        for(int i = 1 ; i < n ; i++) {
            before[i] = nums[i]*before[i-1];
        }

        after[n - 1] = nums[n-1] ; 
        for(int i = n-2 ; i >= 0 ; i--){
            after[i] = nums[i]*after[i+1] ;
        }

        for(int i = 1 ; i < n ; i++) {
            sol[i] = before[i-1]*after[i+1];
        }
        sol[0] = after[1] ; 
        sol[n-1] = before[n-2];

        return sol;

    }
};
