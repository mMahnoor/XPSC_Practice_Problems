#include <iostream>
#include <map>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, string> requests, current_handles;

    for (int i = 0; i < q; i++)
    {
        string old_name, new_name;
        cin >> old_name >> new_name;
        // requests.insert(make_pair(old_name, new_name));
        if (requests.find(old_name) != requests.end()) 
        {
            string tmp = requests[old_name];
            current_handles[tmp] = new_name;
            requests.erase(old_name);
            requests[new_name] = tmp;
        }
        else
        {
            requests.insert(make_pair(new_name, old_name));
            current_handles.insert(make_pair(old_name, new_name));
        }
    }
    cout << current_handles.size() << '\n';
    map<string, string> ::iterator it;
    for (it=current_handles.begin(); it!=current_handles.end(); ++it) {
        cout << (*it).first << " " << (*it).second << '\n';
    }

    return 0;
    
}