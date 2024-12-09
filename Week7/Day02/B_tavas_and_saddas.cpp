#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if(n=="4") cout << 1 << "\n";
    else if(n=="7") cout << 2 << "\n";
    else
    {
        string mask;
        for (int i = 0; i < n.size(); i++)
        {
            if(n[i]=='4') mask+='0';
            else mask+='1';
        }
        int id=(1<<(n.size()))-2;
        for (int i = 0; i < (1<<n.size()); i++)
        {
            string tmp;
            for (int j = n.size()-1; j >= 0; j--)
            {
                if(((i>>j)&1))
                    tmp+='1';
                else tmp+='0';
            }
            id++;
            if(mask==tmp) break;
        }
        cout << id << "\n";
    }
    return 0;
}