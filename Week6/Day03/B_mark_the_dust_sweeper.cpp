// Problem link: https://codeforces.com/problemset/problem/1705/B
#include <iostream>
#include <deque>
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
        deque<long long> a;
        long long cnt_zeros=0;
        for (int i = 0; i < n; i++)
        {
            long long val;
            cin >> val;
            a.push_back(val);
            if(val==0) cnt_zeros++;
        }
        long long min_cnt=0;
        while(!a.empty() && a.front()==0)
        {
            a.pop_front();
            cnt_zeros--;
        }
        if(!a.empty() && a.back()==0) cnt_zeros--;
        if(!a.empty()) a.pop_back();
        size_t i=0, j=i+1;
        if(cnt_zeros>0)
        {
            while (j<a.size() && i<j)
            {
                if(cnt_zeros==0) break;
                while(j<a.size() && a[j]!=0) j++;
                if(a[j]==0)
                {
                    a[i]--;
                    a[j]++;
                    min_cnt++;
                    cnt_zeros--;
                    j++;
                }
                if(a[i]==0) i++;
            }
        }    
        while(!a.empty())
        {
            min_cnt+=a.front();
            a.pop_front();
        }
        cout << min_cnt << "\n";
    }
    return 0;
}