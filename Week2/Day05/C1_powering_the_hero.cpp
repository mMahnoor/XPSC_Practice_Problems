#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        long long int total_power=0;
        priority_queue<int> bonus;
        while(n--)
        {
            int s;
            cin >> s;
            if(s>0)
            {
                bonus.push(s);
            }
            else if(s==0)
            {
                if(!bonus.empty())
                {
                    total_power+=bonus.top();
                    bonus.pop();                    
                }

            }
        }
        cout << total_power << "\n";
    }
    return 0;
}