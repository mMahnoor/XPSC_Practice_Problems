#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        if(s.size()!=5) cout << "N)\n";
        else
        {
            unordered_map<char, bool> mp={{'T',false}, {'i',false}, {'m',false}, {'u',false}, {'r',false}};
            unordered_map<char, bool> :: iterator it;
            for (int i = 0; i < n; i++)
            {
                if(mp.find(s[i])!=mp.end()) mp[s[i]] = true;
                
            }
            int flag=1;
            for (it = mp.begin(); it != mp.end(); it++)
            {
                if(it->second) 
                {
                    flag=0;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";            
        }        
    } 
       
    return 0;
}