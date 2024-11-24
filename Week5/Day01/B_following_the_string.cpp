#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<int, char> mp;
    mp = {{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'},{7,'g'},{8,'h'},{9,'i'},{10,'j'},{11,'k'},{12,'l'},{13,'m'},{14,'n'},{15,'o'},{16,'p'},{17,'q'},{18,'r'},{19,'s'},{20,'t'},{21,'u'},{22,'v'},{23,'w'},{24,'x'},{25,'y'},{26,'z'}};
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        multimap<int, char> freq;
        auto it = mp.begin();
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0)
            {
                s+=it->second;
                freq.insert(make_pair(0, it->second));
                it++;
            }
            else{
                auto it1 = freq.find(a[i]-1);
                if(it1!=freq.end()) s+=it1->second;
                freq.insert(make_pair(a[i], it1->second));
                auto it2 = freq.find(a[i]-1);
                freq.erase(it2);
            }
        }
        cout << s << "\n";
    }
    return 0;
}