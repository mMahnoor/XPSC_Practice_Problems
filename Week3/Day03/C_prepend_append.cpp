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
        int l=0, r=n-1, min_len=n;
        while(l<r)
        {
            if(s[l]==s[r]) break;
            l++;
            r--;
            min_len-=2;
        }
        cout << min_len << endl;
    }
    return 0;
}