#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, flag=1;
    long long sum=0;
    cin >> n;
    map<int, int> pref;
    map<int, int>::iterator it;
    for(int i=0; i<n; i++)
    {
        int l, r;
        cin >> l >> r;
        pref[l]+=1;
        pref[r+1]-=1;
    }
    for (it = pref.begin(); it != pref.end(); it++)
    {
        sum+=it->second;
        if(sum>2) 
        {
            flag=0;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}