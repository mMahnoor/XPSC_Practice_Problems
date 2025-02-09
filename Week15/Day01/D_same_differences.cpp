#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> diff;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            diff[a[i]-(i+1)]++;
        }
        long long cntP = 0;
        for (map<int, int>::iterator it = diff.begin(); it != diff.end(); it++)
        {
            if(it->second>1) 
            {
                long long val = it->second;
                cntP+=((val*(val-1))/2);
            }
        }
        cout << cntP << "\n";
    } 
    return 0;
}