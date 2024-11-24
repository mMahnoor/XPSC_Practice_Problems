#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        if(n%2!=0)
        {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for (int i = 1; i <= n; i+=2)
            {
                if(i!=1) s+='B';
                s+="AA";
            }
            cout << s << "\n";
        }

    }
    return 0;
}