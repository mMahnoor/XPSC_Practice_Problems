#include <iostream>
#include <string>
#include <map>
#include <list>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        // string a1[n], a2[n], a3[n];
        map<string, list<int> > a;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a[s].push_back(1);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
    
            map<string, list<int> > ::iterator it = a.find(s);
            if(it!=a.end())
            {
                a[(*it).first].push_back(2);
            }
            else a[s].push_back(2);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
    
            map<string, list<int> > ::iterator it = a.find(s);
            if(it!=a.end())
            {
                a[(*it).first].push_back(3);
            }
            else a[s].push_back(3);
            
        }

        int p[3] = {0, 0, 0};
        map<string, list<int> > ::iterator it = a.begin();
        while(it!=a.end())
        {
            if(a[(*it).first].size()==1) p[a[(*it).first].front()-1]+=3;
            if(a[(*it).first].size()==2) 
            {
                p[a[(*it).first].front()-1]++;
                p[a[(*it).first].back()-1]++;
            }
            it++;
        } 
        for (int i = 0; i < 3; i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";      
        
    }

    return 0;
    
}