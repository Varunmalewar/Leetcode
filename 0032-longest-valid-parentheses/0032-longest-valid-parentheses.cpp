class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int len = 0;
        int ans = 0;
        int n = s.length();
        if(n == 0) return 0;
        

        for(int i = 0 ; i < n; i++){
            
            char ch = s[i];

            
            
            if(ch == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    len = i - st.top() ;
                    ans = max(ans,len);
                }
            }
        }
        return ans;
    }
};