class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int valLength=0;
        if(s.empty()){
            return 0;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }else{
                    valLength=max(valLength, i-st.top());
                }
            }
        }
        return valLength;
    }
};