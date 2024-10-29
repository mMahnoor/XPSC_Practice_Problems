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
        int start=0, end=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B')
            {
                start=i;
                break;
            }
        }
        for (int i = n-1; i >= 0; i--)
        {
            if(s[i]=='B')
            {
                end=i;
                break;
            }
        }
        int l = end-start+1;
        cout << l << endl;
        
    }
    return 0;
}