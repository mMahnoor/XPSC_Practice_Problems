#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        long long a[n];
        unordered_set<long long> st;
        vector<long long> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            long long val;
            cin >> val;
            if(st.find(val)==st.end()) x.push_back(val);
            st.insert(val);  
        }
        for (int k = 0; k < x.size(); k++)
        {
            for (int i = 0; i < n; i++)
            {
                if(a[i]%(1LL<<x[k])==0)
                {
                    long long tmp = (1LL<<(x[k]-1));
                    a[i]+=tmp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}