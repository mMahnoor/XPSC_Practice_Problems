#include <iostream>
#include <algorithm>
#include <deque>
#include <cmath>
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
        deque<int> dq;
        deque<pair<int, int> > res;
        for (int i = 1; i <= n; i++)
        {
            dq.push_front(i);
        }

        while(dq.size()>1)
        {
            int a = dq.front();
            dq.pop_front();
            int b = dq.front();
            dq.pop_front();
            res.push_back(make_pair(a, b));
            int avg = ceil((a+b)/2.0);
            dq.push_front(avg);
        }
        cout << dq.front() << "\n";
        while(!res.empty())
        {
            cout << res.front().first << " " << res.front().second << "\n";
            res.pop_front();
        }
    }
    return 0;
}