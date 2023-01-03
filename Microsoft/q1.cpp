// Evaluate Reverse Polish Notation
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto t: tokens) {
            if(t == "+" || t == "-" || t == "*" || t == "/") {
                int op2 = st.top(); 
                st.pop();
                int op1 = st.top();
                st.pop();
                if(t == "+") st.push(op1 + op2);
                else if(t == "-") st.push(op1 - op2); 
                else if(t == "*") st.push(op1 * op2);
                else if(t == "/") st.push(op1 / op2);
            }
            else {
                int num = stoi(t);
                st.push(num); 
            }
            
        }
        return st.top();
    }
};

/*
*   Implemented using a stack.
*   Whenever you see a operator pop two elements and push the result.
*/