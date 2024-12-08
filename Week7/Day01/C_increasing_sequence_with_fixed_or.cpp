#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> res;
        res.push_back(n);
        for (long long k = 0; k < log2(n); k++)
        {
            if((n>>k)&1)
            {
                res.push_back(n-(1LL<<k));
            }
        }
        cout << res.size() << "\n";
        for (int i = res.size()-1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}