// Problem link: https://cses.fi/problemset/task/2216
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> st;
    for (int i = n-1; i >= 0; i--)
    {
        if(!st.empty())
        {
            set<int>::iterator it=st.upper_bound(a[i]);
            if(it!=st.end())
            {
                if(*it-a[i]==1)
                {
                    it = st.find(*it);
                    st.erase(it); 
                    st.insert(a[i]);
                }
                else st.insert(a[i]);
            }
            else
            {
                st.insert(a[i]);
            }
        }
        else
        {
            st.insert(a[i]);
        }
    }
    cout << st.size() << "\n";
    return 0;
}