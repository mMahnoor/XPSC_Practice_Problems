#include <iostream>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    pbds<pair<int, int> > p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0;
    while(j<n)
    {
        p.insert(make_pair(a[j], j));
        if(j-i+1==k)
        {
            int id = k/2;
            if(k%2==0) id--;
            auto it = p.find_by_order(id);
            cout << it->first << " ";
            p.erase(make_pair(a[i], i));
            i++;
        }
        j++;
    }
    cout << "\n";
    return 0;
}