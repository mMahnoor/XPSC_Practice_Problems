#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<pair<string, string> > leaf;
    for (int i = 0; i < n; i++)
    {
        string s, c;
        cin >> s >> c;        
        leaf.insert(make_pair(s, c));
    }
    cout << leaf.size() << endl;

    return 0;
    
}