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
        int lower_lim = 0, upper_lim=INT_MAX;
        vector<int> exclude;
        while(n--)
        {
            int a, x;
            cin >> a >> x;
            if(a==1) lower_lim = max(lower_lim, x);
            else if(a==2) upper_lim = min(upper_lim, x);
            else exclude.push_back(x);
        }
        int total = upper_lim-lower_lim+1;
        if(total>0)
        {
            for (int i = 0; i < exclude.size(); i++)
            {
                if(exclude[i]>=lower_lim && exclude[i]<=upper_lim)
                {
                    total--;
                }
            }
        }
        cout << max(0, total) << "\n";
    }
    return 0;
}