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
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if(s1[i]=='B')
            {
                s1[i]='G';
            }
            if(s2[i]=='B')
            {
                s2[i]='G';
            }
            if(s1[i]!=s2[i])
            {
                flag=0;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
         
    } 
       
    return 0;
}