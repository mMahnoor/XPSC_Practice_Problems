// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t=1;
    while(1)
    {
        int n, q;
        cin >> n >> q;
        if(n==0 && q==0) break;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << "CASE# " << t << ":\n";
        while(q--)
        {
            int v;
            cin >> v;
            vector<int>::iterator it = lower_bound(a.begin(), a.end(), v);
            if(it!=a.end() && *it==v)
            {
                cout << v << " found at " << it-a.begin()+1 << "\n";
            }
            else cout << v << " not found\n";
        }
        t++;
    }

    
    return 0;
}