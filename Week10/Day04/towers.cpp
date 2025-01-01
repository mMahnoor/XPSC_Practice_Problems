// Problem link: https://cses.fi/problemset/task/1073
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
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        if(!st.empty())
        {
            multiset<int>::iterator it=st.upper_bound(a[i]);
            if(it!=st.end())
            {
                it = st.find(*it);
                if (it != st.end()) {
                    st.erase(it);
                }   
                st.insert(a[i]);
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