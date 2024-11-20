#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
        int n, s;
        cin >> n >> s;

        int a[n];
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        if(sum<s) cout << "-1\n";
        else
        {
            int i=0, j=0, k_sum=0, segment=0, cnt=0;

            while(j<n)
            {
                k_sum+=a[j];
                if(k_sum<=s)
                {
                    cnt++;
                }
                else{
                    segment=max(segment, cnt);
                    while(k_sum>s)
                    {
                        cnt--;
                        k_sum-=a[i];
                        i++;
                    }
                    cnt++;
                }
                segment=max(segment, cnt);
                j++;
            }
            cout << n-segment << "\n";
        }
        
    }
    return 0;
}