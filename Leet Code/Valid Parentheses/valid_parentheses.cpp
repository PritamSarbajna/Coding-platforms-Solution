class Solution {
public:
  bool isValid(string s) {
    map<char, char> p{{')', '('}, {']', '['}, {'}', '{'}};
    stack<char> st;    
    for (char c : s) {
      if (!p.count(c)) {
        st.push(c);
      } 
        else {
            if (st.empty() || p[c] != st.top()) {
                return false; 
        }       
        st.pop();
      }
    }
    return st.empty();
  }
};
