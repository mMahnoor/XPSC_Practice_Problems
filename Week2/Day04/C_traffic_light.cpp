#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) 
    {
        int n;
        char c;
        cin >> n >> c;
        string s;        
        cin >> s;

        bool cnt=false;
        deque<char> dq;
        int time=0, t=0;
        for (int i = 0; i < n; i++)
        {
           dq.push_back(s[i]);
            
        }
        while(dq.back()!='g')
        {
            char ch = dq.front();
            dq.pop_front();
            dq.push_back(ch);
        }
        while(!dq.empty())
        {
            if(dq.front()==c)
            {
                cnt=true;
            }
            if(cnt) t++;
            if(dq.front()=='g' && cnt)
            {
                cnt=false;
                time = max(time, t);
                t=0;
            }
            dq.pop_front();
        }
        cout << time-1 << endl;
        
    }
    return 0;
}