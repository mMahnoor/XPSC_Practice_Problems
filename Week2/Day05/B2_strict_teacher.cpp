// Problem link: https://codeforces.com/problemset/problem/2005/B2

#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, m, q, min_p, max_p;
        cin >> n >> m >> q;

        set<int> b;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.insert(x);
        }
        min_p=*b.begin();
        max_p=*--b.end();
        while(q--)
        {
            int a, upper=n, lower=1, d=0;
            cin >> a;
            if(a<min_p) d=min_p-1;
            else if(a>max_p) d=n-max_p;
            else
            {
                lower = *--b.lower_bound(a);
                upper = *b.upper_bound(a);
                if((upper-lower)-1%2!=0) 
                {
                    a=lower+((upper-lower)/2);
                    d=a-lower;
                }
                else d=min(a-lower, upper-a);
            }
            cout << d << "\n";
        }
        
    }
    return 0;
}