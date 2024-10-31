#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s, p;
        cin >> s;

        unordered_map<char, bool> alpha;
        for (char c = 'a'; c <= 'z'; c++) 
        {
            alpha[c] = false;
        }

        int id=-1;        
        for (int i = 0; s[i] != '\0'; i++)
        {
            if(alpha[s[i]]==false) alpha[s[i]]=true;
            if(i+1<s.size())
            {
                if(s[i]==s[i+1])
                {
                    id=i;
                }
            }
        }
        for (char c = 'a'; c <= 'z'; c++) 
        {
            if(alpha[c] == false)
            {
                p=c;
                break;
            }
        }
        if(id>=0) s.insert(id+1,p);
        else s.insert(0,p);
        cout << s << endl;        
    }
        
    return 0;
}