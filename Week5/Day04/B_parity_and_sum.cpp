#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
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
        vector<pair<int, int> > v_even;
        priority_queue<pair<long long, int> > v_odd;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0) 
            {
                v_even.push_back(make_pair(a[i], i));
            }
            else 
            {
                v_odd.push(make_pair(a[i], i));
            }
        }
        if(v_even.size()==n || v_odd.size()==n)
        {
            cout << "0\n";
        }
        else
        {
            sort(v_even.begin(), v_even.end());
            long long min_op=0;
            vector<pair<int, int> >::iterator it;
            for (it = v_even.begin(); it!=v_even.end(); it++)
            {
                if(v_odd.top().first>(*it).first)
                {
                    long long sum=v_odd.top().first+(*it).first;
                    int k = (*it).second;
                    v_odd.push(make_pair(sum, k));
                    min_op++;
                }
                else{
                    min_op=v_even.size()+1;
                    break;
                }

            }
            cout << min_op << "\n";
        }
        
    }
    return 0;
}