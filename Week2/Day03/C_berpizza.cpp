#include <iostream>
#include <set>
using namespace std;

int main()
{
    int q;
    cin >> q;

    set<pair<int, int> > polycarp, monocarp;
    set<pair<int, int> >::iterator it1, it2;
    int i=1;
    while(q--)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            int m;
            cin >> m;
            polycarp.insert(make_pair(m, -i));
            monocarp.insert(make_pair(i, m));
            i++;
        }
        else if(x==2)
        {
            it1=monocarp.begin();
            pair<int, int> p=make_pair(it1->second, -it1->first);
            it2=polycarp.find(p);
            cout << it1->first << "\n";
            monocarp.erase(it1);
            polycarp.erase(it2);
        }
        else
        {
            it1=polycarp.end();
            it1--;
            pair<int, int> p=make_pair((-1)*it1->second, it1->first);
            it2=monocarp.find(p);
            cout << it2->first << "\n";
            polycarp.erase(it1);
            monocarp.erase(it2);
        } 
    }
    return 0;
}