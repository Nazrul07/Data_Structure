#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    string s;
    cin>>s;
    stack<char>st;
    st.push('(');
    s+=')';
    for(i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cout<<s[i];
        }
        else
        {
            if((s[i]=='+' || s[i]=='-')&& st.top()=='*')
            {
                while(1)
                {
                if(st.top()=='(') break;
                else
                {
                    cout<<st.top();
                    st.pop();
                }
                }
            }
            else if((s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')&& st.top()=='^')
            {
                while(1)
                {
                if(st.top()=='(') break;
                else
                {
                    cout<<st.top();
                    st.pop();
                }
                }
            }
            else if((s[i]=='+' || s[i]=='-' || s[i]=='*')&& st.top()=='/')
            {
                while(1)
                {
                if(st.top()=='(') break;
                else
                {
                    cout<<st.top();
                    st.pop();
                }
                }
            }
            st.push(s[i]);
        }
        if(st.top()==')')
        {
            st.pop();
            while(1)
            {
                if(st.top()=='(') break;
                else
                {
                    cout<<st.top();
                    st.pop();
                }
            }
        }
    }
    return 0;
}
