#include <iostream>
#include <map>
#include <vector>
// #include <tuple>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> config;
    vector<pair<string, pair<string, string> > > command;
    while(n--)
    {
        string name, ip;
        cin >> name >> ip;
        config[ip] = name;
    }
    while(m--)
    {
        string op, ip;
        cin >> op >> ip;
        string r = ip;
        ip.pop_back();
        string mem = "#"+config[ip];
        command.push_back(make_pair(op, make_pair(r, mem)));
    }
    vector<pair<string, pair<string, string> > > :: iterator it;
    for (it= command.begin(); it != command.end(); it++)
    {
        cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second << "\n";
    }
    
    return 0;
}