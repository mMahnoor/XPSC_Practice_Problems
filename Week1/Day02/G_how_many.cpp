#include <iostream>
#include <set>

using namespace std;

int S, T;
bool check(int i, int j, int k)
{
    if(i+j+k<=S && i*j*k<=T) return true;
    else return false;
}

int main()
{
    cin >> S >> T;

    int c=0;
    for (int i = 0; i <= S; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            for (int k = 0; k <= S; k++)
            {
                if(check(i, j, k)) c++;
            }
        }
    }
    cout << c << "\n";
    
    return 0;
}