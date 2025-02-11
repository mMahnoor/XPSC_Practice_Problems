#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, cnt_A=0, cnt_B=0, id=-1, minOp=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='A') cnt_A++;
            else cnt_B++;
        }
        if(cnt_B>k)
        {
            minOp=1;
            int b=0, c=0;
            if(b==k)
            {
                id=n;
            }
            else
            {
                for (int i = n-1; i >= 0; i--)
                {
                    if(s[i]=='B') b++;
                    if(b==k)
                    {
                        id=i;
                        break;
                    }
                }
            }
        }
        else if(cnt_B<k)
        {
            minOp=1;
            int rem = k-cnt_B;
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='A') rem--;
                if(rem==0)
                {
                    id=i+1;
                    break;
                }
            }
            
        }
        cout << minOp << "\n";
        if(minOp)
        {
            cout << id << " ";
            if(cnt_B>k) cout << "A\n";
            else cout << "B\n";
        }
    }
    return 0;
}