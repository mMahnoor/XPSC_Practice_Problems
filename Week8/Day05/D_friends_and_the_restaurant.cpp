#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x[n], y[n], diff[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
            diff[i]=y[i]-x[i];
        }
        int i=0, j=n-1;
        long long max_cnt=0;
        sort(diff, diff+n);
        while(i<j)
        {
            if((diff[i]+diff[j])>=0) 
            {
                max_cnt++;
                i++;
                j--;
            }
            else{
                if(diff[i]<diff[j]) i++;
                else j--;
            } 
        }
        cout << max_cnt << "\n";
    }
    return 0;
}