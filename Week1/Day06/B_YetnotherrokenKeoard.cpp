#include <iostream>
#include <string>
#include <deque>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        deque<char> result;
        cin >> s;
        deque<int> del_i;
        deque<int> cap_k, sm_k;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
            {
                cap_k.push_back(i);
            }
            else if(s[i]>='a' && s[i]<='z' && s[i]!='b')
            {
                sm_k.push_back(i);
            }
            if(s[i]=='B')
            {
                if(!cap_k.empty())
                {
                    del_i.push_back(cap_k.back());
                    cap_k.pop_back();
                }
                                    
            }
            else if(s[i]=='b')
            {
                if(!sm_k.empty()) 
                {
                    del_i.push_back(sm_k.back());
                    sm_k.pop_back();
                }
            }
        }
        unordered_map<int, int> d;
        unordered_map<int, int>::iterator it;
        for (int i = 0; i < del_i.size(); i++)
        {
            d.insert(make_pair(del_i[i],del_i[i]));
        }
        for (int i = 0; i < s.size(); i++)
        {
            if((s[i]!='B' && s[i]!='b'))
            {
                if(d.find(i) == d.end()) cout << s[i];
            }
                
        }
        cout << endl;
        
    }
    return 0;
}