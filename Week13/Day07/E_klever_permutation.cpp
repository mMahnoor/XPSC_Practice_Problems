// Problem link: https://codeforces.com/problemset/problem/1927/E
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> res(n);
        int i=0, j, m=1, p=n;
        while(i<k)
        {
            j=i;
            while(j<n)
            {
                if(j%2==0) 
                {
                    res[j]=m;
                    m++;
                }
                else
                {
                    res[j]=p;
                    p--;
                }
                j+=k;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}