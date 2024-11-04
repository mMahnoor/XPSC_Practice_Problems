#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) 
    {
        cout << "\n";
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> mp_start, mp_dest;
        map<int, int>::iterator it1, it2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp_start.insert(make_pair(a[i], i));
        }
        for (int i = n-1; i >= 0; i--)
        {
            mp_dest.insert(make_pair(a[i], i));
            
        }
        while(k--)
        {
            int a, b;
            cin >> a >> b;
            if(mp_start.find(a)==mp_start.end()||mp_dest.find(b)==mp_dest.end())
                cout << "NO\n";
            else
            {
                if(mp_start[a]<mp_dest[b]) cout << "YES\n";
                else cout << "NO\n";
            }
        }
        
    }
    return 0;
}