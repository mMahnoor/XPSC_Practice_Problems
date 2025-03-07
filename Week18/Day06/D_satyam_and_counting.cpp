#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<int> > v(n+5, vector<int>(2));
        long long ans=0;
        int i=n;
        while(i--)
        {
            int x, y;
            cin >> x >> y;
            if(v[x][!y]) 
            {
                ans+=(n-2);
            }
            if(x>=1)
            {
                if(v[x-1][!y]&&v[x+1][!y]) ans+=1;
            }
            if(x>1)
            {
                if(v[x-1][!y]&&v[x-2][y]) ans+=1;
            }
            if(v[x+1][!y]&&v[x+2][y]) ans+=1;
            v[x][y]++;
        }
        cout << ans << "\n";
    }
    return 0;
}