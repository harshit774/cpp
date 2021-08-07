#include<bits/stdc++.h>
using namespace std;

bool helper(string s){
    stack<char> st;
    char a;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
            continue;
        }

        if(st.empty()) return false;

        switch(s[i])
        {
            case ')' : a = st.top();
                        st.pop();
                        if(a=='{' or a=='['){
                            return false;
                        }
                        break;

            case '}' : a = st.top();
                        st.pop();
                        if(a=='(' or a=='['){
                            return false;
                        }
                        break;
            case ']' : a = st.top();
                        st.pop();
                        if(a=='{' or a=='('){
                            return false;
                        }
                        break;
        }
    }
    return st.empty();
}

int main(){
    string s;cin>>s;
    int ans = helper(s);
    cout<< ans <<'\n';
}