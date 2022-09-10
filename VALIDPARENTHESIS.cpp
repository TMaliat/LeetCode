#include<bits/stdc++.h>
using namespace std;

bool isValid(string str){
    stack<char> st;
    if(str.length()==0) return true; // valid parenthesis cz there is no parenthesis
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='[') st.push(str[i]);
        else if(!st.empty() && str[i]==')' && st.top()=='(') st.pop();
        else if(!st.empty() && str[i]=='}' && st.top()=='{') st.pop();
        else if(!st.empty() && str[i]==']' && st.top()=='[') st.pop();
        else return false;
    }
    return st.empty();
}

int main(){
    string str; cin >> str;
    //isValid(str);
    bool ans=isValid(str);
    cout << ans << endl;
}