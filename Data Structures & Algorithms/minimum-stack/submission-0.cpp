class MinStack {
public:
    vector<int> st;
    vector<int> mini;

    MinStack() {}

    void push(int val) {
        st.push_back(val);

        if (mini.empty())
            mini.push_back(val);
        else
            mini.push_back(min(val, mini.back()));
    }

    void pop() {
        st.pop_back();
        mini.pop_back();
    }

    int top() {
        return st.back();
    }

    int getMin() {
        return mini.back();
    }
};
