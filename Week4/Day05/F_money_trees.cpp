// Problem link: https://codeforces.com/problemset/problem/1873/F
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n], h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int i=0, j=0, max_segment=0;
        int fruits_cnt=0;
        while(j<n)
        {
            fruits_cnt+=a[j];
            if((j+1)<n && h[j]%h[j+1]==0)
            {
                if(fruits_cnt<=k)
                {
                    max_segment=max(max_segment, j-i+1);
                }
                else
                {
                    while(fruits_cnt>k)
                    {
                        fruits_cnt-=a[i];
                        i++;
                    }
                    max_segment=max(max_segment, j-i+1);
                }
            }
            else
            {  
                if(fruits_cnt<=k)
                {
                    max_segment=max(max_segment, j-i+1);
                }
                else
                {
                    while(fruits_cnt>k)
                    {
                        fruits_cnt-=a[i];
                        i++;
                    }
                    max_segment=max(max_segment, j-i+1);
                }              
                max_segment=max(max_segment, j-i+1);
                fruits_cnt=0;
                i=j+1;
            }
            j++;
        }
        cout << max_segment << "\n";
    }
    return 0;
}