// Problem link: https://codeforces.com/problemset/problem/1738/B
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        deque<long long> s, a;
        for (long long i = 0; i < k; i++)
        {
            long long val;
            cin >> val;
            s.push_back(val);
        }
        int flag=1;
        if(k>1)
        {
            while(s.size()>1)
            {
                long long x=s.back();
                s.pop_back();
                long long y=s.back();
                long long res = x-y;

                if(!a.empty())
                {
                    if(a.front()>=res) a.push_front(res);
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                else a.push_front(res);
            }
            if(flag)
            {
                long long l=n-k+1;
                long long tmp;
                if(s.front()>0)
                {
                    if((s.front()%l)>0)
                    {
                        tmp = (s.front()/l)+1;
                    }
                    else tmp = s.front()/l;
                }
                else{
                    tmp = s.front()/l;
                }
                if(tmp>a.front()) flag=0;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}