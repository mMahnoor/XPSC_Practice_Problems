#include <iostream>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0, max_length=0;
    long long sum=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum<=s)
        {
            max_length=max(max_length, j-i+1);
        }
        else{
            sum-=a[i];
            i++;
        }
        j++;
    }
    cout << max_length << "\n";
    return 0;
}