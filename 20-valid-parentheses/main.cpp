class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.size() == 0){
                    return false;
                }
                char tmp; 
                tmp = (s[i] == ')' ? '(' : (s[i] == '}' ? '{' : (s[i] == ']' ? '[' : ' ')));
                if(st.top() != tmp){
                    return false;
                }
                st.pop();
            }
        }
        if(st.size() == 0){
            return true;
        }
        return false;
    }
};
