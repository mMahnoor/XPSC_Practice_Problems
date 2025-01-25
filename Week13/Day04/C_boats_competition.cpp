#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, maxC=0;
        cin >> n;
        vector<int> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(w.begin(), w.end());
        for (int s = 2; s <= 2*n; s++)
        {
            int i=0, j=n-1, cnt=0;
            while(i<j)
            {
                if(w[i]+w[j]>s) j--;
                else if(w[i]+w[j]<s) i++;
                else 
                {
                    cnt++;
                    i++;
                    j--;
                }
            }
            maxC=max(maxC, cnt);
        }
        cout << maxC << "\n";
    }
    return 0;
}