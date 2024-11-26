#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int i=0, j=0;
        int flag=0;
        string k1, k2;
        for (int i = 0; i < 2*s.size(); i++)
        {

            if(i+1<=s.size()) k1+="(";
            else k1+=")";

        }
        for (int i = 0; i < s.size(); i++)
        {

            k2+="()";

        }
        int p1=0, p2=0;
        string q1, q2, res;
        while(j<(2*s.size()))
        {
            q1+=k1[j];
            q2+=k2[j];
            if(j-i+1==s.size())
            {
                if(p1 && p2)
                {
                    flag=1;
                    break;
                }
                else if(q1==s)
                {
                    p1=1;
                }
                else if(q2==s)
                {
                    p2=1;
                }
                q1=q1.substr(1, q1.size()-1);
                q2=q2.substr(1, q2.size()-1);
                i++;
            }
            j++;
        }
        if(p1==0&&flag==0) res=k1;
        else if(p2==0&&flag==0) res=k2;
        if(flag==1)
        {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            cout << res << "\n";
        }
    }
    return 0;
}