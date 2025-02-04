#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n, flag=1;
    long long max_sum=0, sum=0;
    cin >> n;
    map<long long, long long> pref;
    map<long long, long long>::iterator it;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        pref[a]+=1;
        pref[b+1]-=1;
    }
    for (it = pref.begin(); it != pref.end(); it++)
    {
        sum+=it->second;
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << "\n";
    return 0;
}