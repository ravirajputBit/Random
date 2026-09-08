#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        st.push(s[i]);
        else{
            if(st.empty())
            cout<<"NO";
            char top = st.top();
            if((s[i] == ')' && top == '(') || (s[i] == '}' && top == '{') || (s[i] == ']' && top == '[')){
                st.pop();
            }else{
                cout<<"NO";
            }
        }
    }
    if(st.empty())
        cout<<"YES";
    cout<<"NO";
}
