#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        long long N, cnt=0;
        cin >> N;
        string s, tmp;
        cin >> s;
        for(long long i=0; i<N; i++)
        {
            if(tmp.empty()) tmp+=s[i];
            else
            {
                if(s[i]!=tmp.back())
                {
                    cnt++;
                    tmp.pop_back();
                }
                else tmp+=s[i];
            }
        }
        if(cnt%2==0) cout << "RAMOS\n";
        else cout << "ZLATAN\n";
    }
	return 0;
}
