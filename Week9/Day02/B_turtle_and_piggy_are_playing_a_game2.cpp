#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int turtle_turns=0;
        if((n-1)%2==0)
        {
            turtle_turns=(n-1)/2;
        }
        else
        {
            turtle_turns=((n-1)/2)+1;
        }
        int ans=0;
        for (map<int, int>::iterator it=mp.begin(); it!=mp.end(); it++)
        {
            if(turtle_turns>=it->second)
            {
                turtle_turns-=it->second;
            }
            else 
            {
                ans=it->first;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}