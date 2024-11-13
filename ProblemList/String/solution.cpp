#include<bits/stdc++.h>
using namespace std;
bool isVaild(string &s){
   stack<char> st;
   for(auto ch : s){
    if(ch == '(') st.push(ch);
    else{
      if(st.empty()) return false;
      if(st.top() == '(' && ch == ')') st.pop();
    }
   }
   return st.empty();
}
int main(){
    int n; cin >> n;
    string s; cin >> s;
    if(isVaild(s)) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}