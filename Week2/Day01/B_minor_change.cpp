#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int min_chng=0;
    for (int i = 0; i < S.size(); i++)
    {
        if(S[i]!=T[i]) min_chng++;
    }
    cout << min_chng << endl;
    
    return 0;
}