#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    unordered_set<int> st;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        st.insert(a[i]);
        a[i]=st.size();
    }
    while(m--)
    {
        int l;
        cin >> l;
        cout << a[l-1] << "\n";
    }
    
    return 0;
}