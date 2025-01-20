#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, a, b;
        cin >> a >> b >> l;
        long long x=0, k;
        set<int> res;
        while(1)
        {
            long long d=pow(a, x);
            if(l%d==0)
            {
                k=l/d;
                res.insert(k);
                while(k%b==0)
                {
                    k/=b;
                    res.insert(k);
                }
                x++;
            }
            else break;
        }
        cout << res.size() << "\n";
    }
    return 0;
}