#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    string s;
    cin>>s;
    for(int i=0 ; i<s.size() ; i++)
    {
        string temp;
        int a,b;
        while(s[i]!=',')
        {
            temp+=s[i];
            i++;
            if(i==s.size()) break;
        }
        if(temp=="+")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b+a);
        }
        else if(temp=="-")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b-a);
        }
        else if(temp=="*")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b*a);
        }
        else if(temp=="/")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b/a);
        }
        else
        {
            int l=stol(temp);
            st.push(l);
        }
    }
    cout<<st.top();
    return 0;
}
