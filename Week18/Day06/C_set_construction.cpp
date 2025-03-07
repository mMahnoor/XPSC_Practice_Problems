#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<set<int> > b(n+1);
        for (int i = 1; i <= n; i++)
        {
            b[i].insert(i);
        }
        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            for (int j = 1; j <= n; j++)
            {
                if(s[j-1]=='1')
                {
                    b[j].insert(b[i].begin(), b[i].end());
                }
            }
            
        }
        for (int i = 1; i <= n; i++)
        {
            cout << b[i].size() << " ";
            set<int> :: iterator it;
            for (it=b[i].begin(); it!=b[i].end(); it++)
            {
                cout << *it << " ";
            }
            cout << "\n";
        }
        
    }
    return 0;
}