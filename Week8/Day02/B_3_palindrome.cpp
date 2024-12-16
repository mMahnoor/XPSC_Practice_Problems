#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string res;
    for (int i = 0; i < n; i++)
    {
        if((i-2)<0) res+='a';
        else
        {
            if(res[i-2]!='a') res+='a';
            else if(res[i-2]!='b') res+='b';
            else res+='c';
        }
    }
    cout << res << "\n";
    return 0;
}