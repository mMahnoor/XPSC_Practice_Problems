#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a, b(n-1);
        for (int i = 0; i < n-1; i++)
        {
            cin >> b[i];
        }
        a.push_back(b[0]);
        for (int i = 0; i < n-2; i++)
        {
            int num = (b[i]|b[i+1]);        
            a.push_back(num);
        }
        a.push_back(b[n-2]);
        int flag=1;
        for (int i = 0; i < n-1; i++)
        {
            if((a[i]&a[i+1])!=b[i])
            {
                flag=0;
                break;
            }
        }
        if(!flag) cout << "-1";
        else{
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}