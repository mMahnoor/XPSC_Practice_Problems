#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_vowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s, res;
        cin >> s;
        int j=n-1;
        while(j>=0)
        {
            if(is_vowel(s[j]))
            {
                res+=s[j];
                j--;
                res+=s[j];
                j--;
                res+='.';
            }
            else
            {
                res+=s[j];
                j--;
                res+=s[j];
                j--;
                res+=s[j];
                j--;
                res+='.';
            }
        }
        if(res.back()=='.') res.pop_back();
        reverse(res.begin(), res.end());
        cout << res << "\n";
    }
    return 0;
}