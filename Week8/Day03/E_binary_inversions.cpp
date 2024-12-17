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
        int a[n];
        long long cnt_zeros=0, cnt_ones=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==0) cnt_zeros++;
            else cnt_ones++;
        }
        long long zeroes=cnt_zeros, ones=cnt_ones, cntV=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1)
            {
                cntV+=zeroes;
            }
            else zeroes--;
        }
        zeroes=cnt_zeros;
        long long maxV=cntV;
        for (int i = 0; i < n; i++)
        {
            long long tmp;
            if(a[i]==1)
            {
                tmp=cntV-zeroes+(cnt_ones-ones);
                ones--;
            }
            else{
                zeroes--;
                tmp=cntV-(cnt_ones-ones)+zeroes;
            }
            maxV=max(maxV, tmp);
        }
        cout << maxV << "\n";
    }
    return 0;
}