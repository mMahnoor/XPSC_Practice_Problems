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
        cin >> s;
        int maxCoins=0;
        for (int i = 0; i < n; i++)
        {
            if(i+1<n && s[i+1]=='@') maxCoins++;
            else if(i+1<n && s[i+1]=='.') continue;
            else
            {
                if(i+2<n && s[i+2]=='*') break;
            }
        }
        cout << maxCoins << "\n";
    }
    return 0;
}