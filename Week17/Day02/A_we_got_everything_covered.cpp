#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<char> alpha = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        for (int i = 0; i < k; i++)
        {
            s += alpha[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << s;
        }
        cout << "\n";
    }
    return 0;
}