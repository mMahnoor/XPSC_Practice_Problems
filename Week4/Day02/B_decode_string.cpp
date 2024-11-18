// Problem link: https://codeforces.com/problemset/problem/1729/B
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, char> mp = {{"1",'a'},{"2",'b'},{"3",'c'},{"4",'d'},{"5",'e'},{"6",'f'},{"7",'g'},{"8",'h'},{"9",'i'},{"10",'j'},{"11",'k'},{"12",'l'},{"13",'m'},{"14",'n'},{"15",'o'},{"16",'p'},{"17",'q'},{"18",'r'},{"19",'s'},{"20",'t'},{"21",'u'},{"22",'v'},{"23",'w'},{"24",'x'},{"25",'y'},{"26",'z'}};
    while(q--)
    {
        int n;
        cin >> n;

        string t;
        cin >> t;

        string s;
        for (int i = 0; i < n; i++)
        {
            if((i+2)<n && t[i+2]=='0')
            {
                if((i+3)<n)
                {
                    if(t[i+3]!='0')
                    {
                        s+=mp[t.substr(i, 2)];
                        i=i+2;
                    }
                    else{
                        string k;
                        k = t[i];
                        s+=mp[k];
                    }
                }
                else 
                {
                    s+=mp[t.substr(i, 2)];
                    i=i+2;
                }
            }
            else{
                string k;
                k = t[i];
                s+=mp[k];
            }
        }
        cout << s << "\n";

    }
    return 0;
}