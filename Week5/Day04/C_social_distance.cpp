#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int cnt=0;
        int ones=-1;
        int i=0;    
        while (i < n)
        {
            if(s[i]=='0')
            {
                if(ones==-1) 
                {
                    cnt++;
                    ones=i;
                }
                else{
                    if(i-ones-1==k)
                    {
                        cnt++;
                        ones=i;
                    }
                }
            }
            else{
                if(ones==-1) ones=i;
                else if(i-ones-1!=k) 
                {
                    cnt--;
                    ones=i;
                }
                else ones=i;
            }
            i++;
            
        }
        cout << cnt << "\n";
        
    }
    return 0;
}