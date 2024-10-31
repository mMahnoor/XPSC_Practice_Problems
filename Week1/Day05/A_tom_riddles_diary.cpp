#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_set<string> st;
    unordered_set<string> :: iterator it;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        it=st.find(name);
        if(it != st.end())
        {
            cout << "YES\n";
        }
        else
        {
            st.insert(name);
            cout << "NO\n";
        } 
    }
        
    return 0;
}