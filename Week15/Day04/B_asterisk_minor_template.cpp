// problem link: https://codeforces.com/problemset/problem/1796/B
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a; 
        cin >> b;
        if(a[0]==b[0])
        {
            cout << "YES\n";
            cout << a[0] << "*" << '\n';
        }
        else if(a[a.size()-1]==b[b.size()-1])
        {
            cout << "YES\n";
            cout << "*" << a[a.size()-1] << '\n';
        }
        else
        {
            string res;
            for (int i = 1; i < a.size(); i++)
            {
                string tmp;
                tmp += a[i-1];
                tmp += a[i];
                if(b.find(tmp)!=string::npos)
                {
                    res = "*"+tmp+"*";
                    break;
                }
            }
            if(!res.empty())
            {
                cout << "YES\n";
                cout << res << '\n';
            }
            else cout << "NO\n";
        }
    }
    return 0;
}