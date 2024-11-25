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
        string p(s.rbegin(), s.rend());
        if(p<s)
        {
            p+=s;
            cout << p << endl;
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}