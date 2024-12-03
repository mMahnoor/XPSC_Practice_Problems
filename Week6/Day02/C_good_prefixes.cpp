#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n], pre_max[n], pre_sum[n], sum=0, max_element=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
            pre_sum[i]=sum;
            max_element=max(max_element, a[i]);
            pre_max[i]=max_element;
        }
        long long cnt=0;
        for (int i = 0; i < n; i++)
        {
            if((pre_sum[i]-pre_max[i])==pre_max[i]) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}