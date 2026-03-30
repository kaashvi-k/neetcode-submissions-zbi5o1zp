class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars; 
        stack<double> st; 

        int n = position.size(); 
        for(int i = 0 ; i < n ; i++){
            cars.push_back({position[i], (double)(target - position[i]) / speed[i]}); 
        }

        sort(cars.begin() , cars.end()) ; 

        for(int i = n - 1; i >= 0; i--) {
            if(st.empty() || cars[i].second > st.top()) {
                st.push(cars[i].second);
            }
        }

        int num = st.size(); 
        return num; 

    }
};