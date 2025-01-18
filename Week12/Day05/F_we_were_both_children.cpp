#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, maxC=0;
        cin >> n;
        vector<int> a, maxV(n+5);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if(val<=n) mp[val]++;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j<=n; j+=i) {
                maxV[j]+=mp[i];
            }
            maxC=max(maxC, maxV[i]);
        }
        cout << maxC << "\n";
    }
    return 0;
}