#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int coins=0, ans=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==0 && coins) 
            {
                ans++;
                coins--;
            }
            if(a[i]>=k) coins+=a[i];
        }
        cout << ans << "\n";
    }
    return 0;
}