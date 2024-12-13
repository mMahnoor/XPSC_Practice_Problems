// Problem link: https://codeforces.com/problemset/problem/1977/B
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x;
        cin >> x;
        vector<long long> a;
        for (long long i = 0; i <= log2(x); i++)
        {
            if((x>>i)&1)
            {
                a.push_back(1);
            }
            else a.push_back(0);
        }
        if(a.size()>1)
        {
            long long k=0;
            while (k<a.size())
            {
                if((k+1)<a.size() && a[k+1]!=0 && a[k]!=0)
                {
                    a[k]=-1;
                    k++;
                    while(k<a.size() && a[k]==1)
                    {
                        a[k]=0;
                        k++;
                    }
                    if(k==a.size()) 
                    {
                        a.push_back(1);
                        break;
                    }
                    else
                    {
                        a[k]=1;
                        k++;
                        if(k<a.size())
                        {
                            if(a[k]==1) k--;
                        }
                    }
                }
                else k++;

            }
        }
        cout << a.size() << "\n";
        for (long long i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}