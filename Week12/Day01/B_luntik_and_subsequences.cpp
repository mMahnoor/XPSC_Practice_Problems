#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], ones=0, zeroes=0;
        long long cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==1) ones++;
            if(a[i]==0) zeroes++;
        }
        cnt+=ones;
        cnt*=(1LL<<zeroes);
        
        cout << cnt << "\n";
    }
    return 0;
}