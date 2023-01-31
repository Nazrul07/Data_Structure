#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<int>st;
    int a,b;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-48);
        }
        else
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            if(s[i]=='+')
            {
                st.push(b+a);
            }
            else if(s[i]=='-')
            {
                st.push(b-a);
            }
            else if(s[i]=='/')
            {
                st.push(b/a);
            }
            else
            {
                st.push(b*a);
            }
        }
    }
    cout<<st.top();
    return 0;
}
