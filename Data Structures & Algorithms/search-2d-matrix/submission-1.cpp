class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(); 
        int m = matrix[0].size();
        
        int i ; 
        for( i = 0 ; i < n ; i++) {
            int  er = i ; 
            int ec = m-1; 
            if(target <= matrix[er][ec]) {
                break;    
            }
        }

        if(i == n) return false; 

        int start = 0 ; 
        int end = m-1; 

        while(start <= end) {
            int mid = (start + end)/2; 

            if(matrix[i][mid] == target) return true; 
            else if (matrix[i][mid] > target) {
                end = mid-1;
            }
            else start = mid + 1;
        }

        return false; 



    }
};
