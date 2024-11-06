#include <iostream>
#include <deque>
#include <algorithm>
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
        int a[n], flag=1, start=1, end=n;
        deque<int> dq, min_max;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            min_max.push_back(a[i]);
            dq.push_back(a[i]);
        }
        sort(min_max.begin(), min_max.end());
        if(n<4) flag=0;
        else if(is_sorted(a, a+n)) flag=0;
        else if(is_sorted(a, a+n, greater<int>()))
        {
            flag=0;
        }
        else
        {
            while(!dq.empty()&&dq.size()>3)
            {
                int front = dq.front();
                int back = dq.back();
                int min = min_max.front();
                int max = min_max.back();
                if(front!=min && front!=max && back!=min && back!=max) break;
                if(front==min || front==max)
                {
                    if(front==min) min_max.pop_front();
                    else min_max.pop_back();
                    dq.pop_front();
                    start++;
                }
                if(back==min || back==max)
                {
                    if(back==min) min_max.pop_front();
                    else min_max.pop_back();
                    dq.pop_back();
                    end--;
                }
            }
        }
        if(dq.size()<=3) flag=0;
        if(!flag) cout << -1 << "\n";
        else cout << start << " " << end << "\n";
        
    }
    return 0;
}