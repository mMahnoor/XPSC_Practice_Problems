#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main()
{
    string s, t;
    int flag=1;
    cin >> s;
    cin >> t;
    if(s.size()!=t.size()) cout << "No\n";
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i])))
            {
                flag=0;
                break;
            }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}