#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, q, flag=1;
    long long sum=0, cnt;
    cin >> n >> k >> q;
    vector<int> pref(2e5+2);
    for(int i=0; i<n; i++)
    {
        int l, r;
        cin >> l >> r;
        pref[l]+=1;
        pref[r+1]-=1;
    }
    for (int i=0; i<pref.size(); i++)
    {
        sum+=pref[i];
        if(sum>=k) pref[i]=1;
        else pref[i]=0;
    }
    sum = 0;
    for (int i=0; i<pref.size(); i++)
    {
        sum+=pref[i];
        pref[i]=sum;
    }
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        cnt = pref[y]-pref[x-1];
        cout << cnt << "\n";
    }    
    
    return 0;
}