#include <iostream>
#include <map>
#include <vector>
using namespace std;
 
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
 
        map<int, int> b;
        for (int i = 0; i < (n*(n-1))/2; i++)
        {
            int val;
            cin >> val;
            b[val]++;
        }
        vector<int> a;
        int k=1, val=0;
        auto it = b.begin();
        while ( it != b.end())
        {
            val=n-k;
            while(it->second>val)
            {
                a.push_back(it->first);
                k++;
                val+=(n-k);
            }
            a.push_back(it->first);
            k++;
            it++;
        }
        int m=n-a.size();
        while(m>0)
        {
            a.push_back(b.rbegin()->first);
            m--;
        }
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    } 
    return 0;
}