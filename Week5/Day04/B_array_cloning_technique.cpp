#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a[val]++;
        }
        int max_cnt=0;
        for (map<int, int>::iterator it = a.begin(); it != a.end(); it++)
        {
            max_cnt=max(max_cnt, it->second);
        }
        
        int min_op=0;
        while(max_cnt<n)
        {
            min_op+=1;
            if(n-max_cnt>=max_cnt)
            {
                min_op+=max_cnt;
            }
            else 
            {
                min_op+=(n-max_cnt);   
            }    
            max_cnt*=2;         
        }
        
        cout << min_op << "\n";
    }
    return 0;
}