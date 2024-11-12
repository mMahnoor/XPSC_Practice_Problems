// Problem link: https://codeforces.com/problemset/problem/1722/D
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        long long int len = s.size();
        long long int value=0;
        vector<long long int> v;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='L')
            {
                value+=i;
            }
            else
            {
                value+=len-(i+1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            long long int l1, l2, diff;
            if(s[i]=='L')
            {
                l1 = i;
                l2 = len-(i+1);
                if(l2>l1) diff = l2-l1;
                else diff=0;
            }
            else
            {
                l1 = i;
                l2 = len-(i+1);
                if(l1>l2) diff = l1-l2;
                else diff=0;
            }
            v.push_back(diff);
            
        }
        sort(v.begin(), v.end(), greater<int>());
        long long int sum=0;
        for (int i = 0; i < n; i++)
        {
            v[i] += sum;
            sum = v[i];
        }
        for (int k = 0; k < n; k++)
        {
            cout << value+v[k] << " ";
        }
        cout << "\n";

    }
    return 0;
}