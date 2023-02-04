#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s,p;
    cin>>s;
    stack<char>st;
    st.push('(');
    s+=')';
    for(i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='A' && s[i]<='Z') p+=s[i];
        else
        {
            while(1)
            {
                if(s[i]==')')
                {
                    while(1)
                    {
                        if(st.top()!='(')
                        {
                            s+=st.top();
                            st.pop();
                        }
                        else
                        {
                            st.pop();
                            break;
                        }
                    }
                }
                else if((s[i]=='+' || s[i]=='-')&& (st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/' || st.top()=='^'))
                {
                    p+=st.top();
                    st.pop();
                }
                else if((s[i]=='*' || s[i]=='/')&& (st.top()=='*' || st.top()=='/' || st.top()=='^'))
                {
                    p+=st.top();
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                    break;
                }
            }
        }
    }
    cout<<p;
    return 0;
}
