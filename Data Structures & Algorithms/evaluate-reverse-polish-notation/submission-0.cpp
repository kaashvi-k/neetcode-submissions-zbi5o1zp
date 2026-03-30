class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;

        for (auto &ch : tokens) {
            if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                int b = st.back(); 
                st.pop_back();
                int a = st.back(); 
                st.pop_back();

                if (ch == "+") st.push_back(a + b);
                else if (ch == "-") st.push_back(a - b);
                else if (ch == "*") st.push_back(a * b);
                else st.push_back(a / b);
            } 
            else {
                st.push_back(stoi(ch));
            }
        }

        return st.back();
    }
};
