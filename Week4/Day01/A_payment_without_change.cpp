// Problem link: https://codeforces.com/problemset/problem/1256/A
#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        if(S<=b) cout << "YES\n";
        else if(S%n!=0)
        {
            int k=S%n;
            if((S-k)/n<=a)
            {
                if(k<=b) cout << "YES\n";
                else cout << "NO\n";
            }
            else
            {
                if(S-(a*n)<=b) cout << "YES\n";
                else cout << "NO\n";
            }
        }
        else 
        {
            if(S/n<=a) cout << "YES\n";
            else 
            {
                if(S-(a*n)<=b) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    return 0;
}