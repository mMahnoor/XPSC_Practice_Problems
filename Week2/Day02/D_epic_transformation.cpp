#include <iostream>
#include <map>
#include <queue>
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
        int a[n];
        priority_queue<int> pq;
        map<int, int> mp;
        map<int, int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            
            mp[val]++;
        }

        for (it = mp.begin(); it != mp.end(); it++)
        {
            pq.push(it->second);
        }
        while(pq.size()>1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x-=1;
            y-=1;
            if(x>0) pq.push(x);
            if(y>0) pq.push(y);
        }
        if(!pq.empty()) cout << pq.top() << "\n";
        else cout << 0 << "\n";
        
    }
    return 0;
}