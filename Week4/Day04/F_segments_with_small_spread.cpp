#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0;
    long long segments=0;
    multiset<long long> st;
    while(j<n)
    {
        st.insert(a[j]);
        if((*st.rbegin()-*st.begin())<=k)
        {
            segments+=(j-i+1);
        }
        else
        {
            while(*st.rbegin()-*st.begin()>k)
            {                
                st.erase(st.find(a[i]));
                i++;
            }
            segments+=(j-i+1);
        }
        j++;
    }
    cout << segments << "\n";
    return 0;
}