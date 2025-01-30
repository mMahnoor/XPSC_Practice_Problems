#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> a(n), res;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a[i]=s;        
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            for (int j = 0; j < n; j++)
            {
                if(i%k==0 && j%k==0)
                {
                    s+=a[i][j];
                }
            }  
            if(!s.empty()) res.push_back(s);     
        }
        for (int i = 0; i < res.size(); i++)
        {
            for (int j = 0; j < res[i].size(); j++)
            {
                cout << res[i][j];
            }
            cout << "\n";
        }
        
    }
    return 0;
}