#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mp = {
        {'a',0}, {'b',0}, {'c',0}, {'d',0}, {'e',0}, {'f',0}, {'g',0}, {'h',0},
        {'i',0}, {'j',0}, {'k',0}, {'l',0}, {'m',0}, {'n',0}, {'o',0}, {'p',0},
        {'q',0}, {'r',0}, {'s',0}, {'t',0}, {'u',0}, {'v',0}, {'w',0}, {'x',0},
        {'y',0}, {'z',0}
    };

    for (int i = 0; s[i] != '\0'; i++)
    {
        mp[s[i]] = 1;
    }
    unordered_map<char, int>::iterator i = mp.begin();
    unordered_map<char, int>::iterator n = mp.end();
    bool found = false;
    while(i!=n)
    {
        if((*i).second==0)
        {
            found=true;
            cout << (*i).second << endl;
            break;
        }
    }
    if(!found) cout << "None\n";
    return 0;
}