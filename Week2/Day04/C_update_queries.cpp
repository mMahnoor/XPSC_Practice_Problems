#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) 
    {
        int n, m;
        cin >> n >> m;
        
        string s, c;

        cin >> s;
        set<int> ind;
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            ind.insert(val);
        }
        cin >> c;

        sort(c.begin(), c.end());
        
        int k = 0;
        for (set<int> :: iterator it = ind.begin(); it != ind.end(); it++)
        {
            s[*it-1]=c[k];
            k++;
        }
        cout << s << endl;
    }
    return 0;
}