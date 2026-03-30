class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size() ; 

        stack<int> s ; 
        vector<int> solution (n); 
        s.push(n-1) ;
        solution[n-1] = 0 ; 

        for(int i = n-2 ; i >= 0 ; i--){
            while(!s.empty() && (temperatures[s.top()] <= temperatures[i])) {
                s.pop() ; 
            }

            if(s.empty()) {
                solution[i] = 0 ; 
                s.push(i);
            }
            else {
                solution[i] = s.top() - i ; 
                s.push(i) ;
            }
             
        }


        return solution; 


    }
};
