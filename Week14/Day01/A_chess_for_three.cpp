#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int p1, p2, p3, cnt=0;
        cin >> p1 >> p2 >> p3;
        priority_queue<int> pq;
        if(p1>0) pq.push(p1);
        if(p2>0) pq.push(p2);
        if(p3>0)pq.push(p3);
        while(pq.size()>1)
        {
            int val1 = pq.top();
            pq.pop();
            int val2 = pq.top();
            pq.pop();
            val1--;
            val2--;
            cnt++;
            if(val1>0) pq.push(val1);
            if(val2>0) pq.push(val2);
        }
        if(!pq.empty())
        {
            if(pq.top()%2!=0) cout << "-1\n";
            else cout << cnt << "\n";
        }
        else cout << cnt << "\n";
    }
    return 0;
}