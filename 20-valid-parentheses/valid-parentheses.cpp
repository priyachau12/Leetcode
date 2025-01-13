class Solution {
public:
bool isValid(string s) {
        // unordered_map<char, char> matchingBrackets = {
        //     {')', '('},
        //     {'}', '{'},
        //     {']', '['}
        // };
        
        // stack<char> st;
        
        // for (char ch : s) {
        //     if (matchingBrackets.count(ch)) {
        //         if (!st.empty() && st.top() == matchingBrackets[ch]) {
        //             st.pop();
        //         } else {
        //             return false;
        //         }
        //     } else {
        //         st.push(ch);
        //     }
        // }
        
        // return st.empty();
        int n=s.size();
        stack<char>stk;
        for(int i=0;i<n;i++){
            if(s[i]=='('|| s[i]=='{'|| s[i]=='['){
                stk.push(s[i]);
            }
            else{
                 if (stk.empty()) return false;
                if ((s[i] == ')' && stk.top() != '(') ||
                    (s[i] == ']' && stk.top() != '[') ||
                    (s[i] == '}' && stk.top() != '{')) return false;
                    stk.pop();
            }
        }
       return stk.empty();
    }
};
