// Problem link: https://www.codechef.com/problems/PALIXOR
#include <bits/stdc++.h>
using namespace std;

const int max_num=((1LL) << 15);

bool isPallindrome(int val)
{
    string s=to_string(val);
    for(int i=0, j=s.size()-1; i<j; i++, j--)
    {
        if(s[i]!=s[j]) return false;
    }
    return true;
}

vector<int> palin_arr;

int main() {
    for(int i=0; i<max_num; i++)
    {
        if(isPallindrome(i))
        {
            palin_arr.push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        
        int A[N];
        vector<int> freq(max_num+1);
        for(int i=0; i<N; i++)
        {
            cin >> A[i];
            freq[A[i]]++;
        }
        
        long long cnt=N;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<palin_arr.size(); j++)
            {
                cnt+=freq[(A[i] ^ palin_arr[j])];
            }
        }
        cout << cnt/2 << "\n";
    }
	return 0;
}
