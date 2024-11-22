//  Problem link: https://codeforces.com/contest/2000/problem/D
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        long long a[n];
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            int val;
            cin >> val;
            sum+=val;
            a[i]=sum;
        }

        string s;
        cin >> s;

        int i=0, j=n-1;
        long long max_score=0;
        while(i<j)
        {
            if(s[i]=='L' && s[j]=='R')
            {
                if(i-1>=0) max_score+=(a[j]-a[i-1]);
                else max_score+=a[j];
                i++;
                j--;
            }
            else if(s[i]!='L') i++;
            else if(s[j]!='R') j--;
        }
        cout << max_score << "\n";

    }
    return 0;
}