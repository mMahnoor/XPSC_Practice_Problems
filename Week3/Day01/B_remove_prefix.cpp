#include <iostream>
#include <set>
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
        vector<int> a;
        set<int> s;
        
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            a.push_back(val);
            
        }
        
        for (int i = n-1; i >= 0; i--)
        {
            if(s.find(a[i])!=s.end())
            {
                break;
            }
            else
            {
                s.insert(a[i]);
            }           
        }
        
        cout << n-s.size() << "\n";

    }
    return 0;
}