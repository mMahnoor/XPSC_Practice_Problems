// Problem link: https://www.codechef.com/problems/FUM
#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        long long ans=1;
        for(int i=1; i<=n; i++)
        {
            ans=((ans%mod)*(i%mod))%mod;
        }
        cout << ans << "\n";
    }
	return 0;
}
