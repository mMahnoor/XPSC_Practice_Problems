#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dq.push_back(a[i]);
        }
        int val=a[0], j=0;
        for (int i = 1; i < n; i++)
        {
            j++;
            if(val>a[i])
            {
                while(j--)
                {
                    int p=dq.front();
                    dq.pop_front();
                    dq.push_back(p);
                }
            }
            val=a[i];
        }
        if(is_sorted(dq.begin(), dq.end()))
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
    return 0;
}