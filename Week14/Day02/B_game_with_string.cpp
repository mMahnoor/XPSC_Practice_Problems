#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int cnt=0;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if(!st.empty() && s[i]==st.top()) 
        {
            st.pop();
            cnt++;
        }
        else st.push(s[i]);
    }
    if(cnt%2!=0) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}