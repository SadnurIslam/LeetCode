class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i,n=s.size();
        for(i =0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty())return false;
                else if(s[i]==')'){
                    if(st.top()=='(')st.pop();
                    else return false;
                }
                else if(s[i]=='}'){
                    if(st.top()=='{')st.pop();
                    else return false;
                }
                else{
                    if(st.top()=='[')st.pop();
                    else return false;
                }
            }
        }
        if(!st.empty())return false;
        return true;
    }
};
