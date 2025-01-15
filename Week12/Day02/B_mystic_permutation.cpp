// Problem link: https://codeforces.com/problemset/problem/1689/B
#include <iostream>
#include <algorithm>
#include <deque>
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
        deque<int> dq;
        vector<int> a(n), res;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dq.push_back(a[i]);
        }
        if(n==1) 
        {
            cout << "-1\n";
            continue;
        }
        sort(dq.begin(), dq.end());
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=dq.front())
            {
                res.push_back(dq.front());
                dq.pop_front();
            }
            else{
                if(dq.size()==1)
                {
                    int tmp=dq.front(), p=res.back();
                    res[res.size()-1]=tmp;
                    res.push_back(p);
                }
                else
                {
                    int tmp=dq.front();
                    dq.pop_front();
                    res.push_back(dq.front());
                    dq.pop_front();
                    dq.push_front(tmp);
                }
            }
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}