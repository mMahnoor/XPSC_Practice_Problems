#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        map<char, int> mp;
        map<char, int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            
            mp[s[i]]++;
            
        }
        int count_odds=0, flag=0;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second%2!=0)
            {
                count_odds++;
            }
        }
        if(k==0)
        {
            if(n%2==0 && count_odds==0) flag=1;
            else if(n%2!=0 && count_odds==1) flag=1;
        }
        else 
        {
            if((n-k)%2!=0)
            {
                if(count_odds<k)
                {
                    if((k-count_odds)%2!=0) flag=1;
                }
                else if(abs(count_odds-k)==1) flag=1;
            }
            else{
                if(count_odds>0)
                {
                    if(count_odds==k) flag=1;
                    else if(count_odds<k)
                    {
                        if((k-count_odds)%2==0) flag=1;
                    }
                }
                else if(k%2==0) flag=1;
            }  
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
                
    } 
       
    return 0;
}