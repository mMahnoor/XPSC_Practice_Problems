#include <iostream>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        pbds<int> p;
        long long cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n-1; i >= 0; i--)
        {
            cnt+=p.order_of_key(a[i]);
            p.insert(a[i]);
        }
        cout << cnt << "\n";
    }
    
    return 0;
}