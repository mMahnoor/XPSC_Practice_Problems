#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> requests;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        if (requests.find(name) != requests.end()) 
        {
            requests[name]=requests[name]+1;
            string new_name = name+=to_string(requests[name]);
            requests[new_name]=0;
            cout << new_name << "\n";
        }
        else
        {
            requests[name] = 0;
            cout << "OK\n";
        }
    }

    return 0;
    
}