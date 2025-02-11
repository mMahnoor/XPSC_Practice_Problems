#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        char c='a';
        int n = s[1]-'0';
        for (int i = 1; i <= 8; i++)
        {
            if(c!=s[0]) cout << c << n << "\n";
            c++;
        }
        for (int i = 1; i <= 8; i++)
        {
            if(i!=n) cout << s[0] << i << "\n";
        }
    }
    return 0;
}