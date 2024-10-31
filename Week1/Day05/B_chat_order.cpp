#include <iostream>
#include <unordered_map>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    unordered_map<string, int> mp1;
    list<string> chat_list;
    list<pair<int,string> > sorted_list;
    unordered_map<string, int> :: iterator it;
    list<string> :: iterator it1;
    list<pair<int,string> > :: iterator it2;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        
        chat_list.push_front(name);
        
    }
    int i=0;
    for (it1=chat_list.begin(); it1!=chat_list.end(); it1++)
    {
        mp1.insert(make_pair(*it1, i));
        i++;
    }
    for (it=mp1.begin(); it!=mp1.end(); it++)
    {
        sorted_list.push_back(make_pair((*it).second, (*it).first));
    }
    sorted_list.sort();
    for (it2=sorted_list.begin(); it2!=sorted_list.end(); it2++)
    {
        cout << (*it2).second << "\n";
    }
        
    return 0;
}