#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int plus=0, minus=0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]=='+') plus++;
        else minus++;
    }
    int pos1=plus-minus, pos2_1=0, pos2_2=0, k=0, cnt=0;
    plus=0, minus=0;
    for (int i = 0; i < s2.size(); i++)
    {
        if(s2[i]=='+') plus++;
        else if(s2[i]=='-') minus++;
        else k++;
    }
    pos2_1=plus-minus;
    if(k==0)
    {
        if(pos1==pos2_1) 
            cout << fixed << setprecision(12) << 1.0 << "\n";
        else cout << fixed << setprecision(12) << 0.0 << "\n";
    }
    else
    {
        for (int i = 0; i < (1<<k); i++)
        {
            int p=0, m=0;
            for (int j = 0; j < k; j++)
            {
                if((i>>j)&1)
                {
                    p++;
                }
                else m++;
            }
            pos2_2=p-m;
            if(pos2_1+pos2_2==pos1) cnt++;
        }
        cout << fixed << setprecision(12) << (cnt/((1<<k)*1.0)) << "\n";
    }
    return 0;
}