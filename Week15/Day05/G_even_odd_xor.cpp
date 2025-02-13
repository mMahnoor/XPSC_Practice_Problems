// Problem link: https://codeforces.com/problemset/problem/1722/G
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%4==3)
        {
            cout << "2 1 3 ";
            int v = 4;
            for (int i = 3; i < n; i++)
            {
                cout << v << " ";
                v++;
            }
            
        }
        else if(n%4==1)
        {
            cout << "0 ";
            int v=2;
            for (int i = 1; i < n; i++)
            {
                cout << v << " ";
                v++;
            }
        }
        else if(n%4==2)
        {
            cout << "4 1 2 12 3 8 ";
            int v = 14;
            for (int i = 6; i < n; i++)
            {
                cout << v << " ";
                v++;
            }
            
        }
        else
        {
            int v = 2;
            for (int i = 0; i < n; i++)
            {
                cout << v << " ";
                v++;
            }
            
        }
        cout << "\n";
    }
    return 0;
}