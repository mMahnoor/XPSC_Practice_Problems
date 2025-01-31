#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    map<int, int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum=a[i]+a[j];
            mp[sum]++;
        }
    }
    int maxC=0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        maxC=max(maxC, it->second);
    }
    cout << maxC << "\n";
    return 0;
}