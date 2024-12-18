#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cout << "\n";
        char grid[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> grid[i][j];
            }
        }
        int colR=0, colB=0, r=0, b=0;
        for (int i = 0; i < 8; i++)
        {
            int cntR=0, cntB=0;
            for (int j = 0; j < 8; j++)
            {
                if(grid[i][j]=='R') cntR++;
                else cntB++;
            }
            if(cntR==8) r=1;
            else if(cntB==8) b=1;
            else if(cntR==1) colR++;
            else if(cntB==1) colB++;
        }
        if(r) cout << "R\n";
        else if(b) cout << "B\n";
        else{
            if(colR==8) cout << "R\n";
            else cout << "B\n";
        }
    }
    return 0;
}