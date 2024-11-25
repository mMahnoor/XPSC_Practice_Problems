#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        string s;
        for (int i = 0; i < n; i++)
        {
            s+="BAN";
        }
        
        set<pair<int, int> > st;
        int i=0, j=(3*n)-1;
        while(i<j)
        {
            while(s[i]!='B') i++;
            while(s[j]!='N') j--;
            if(i>=j) break;
            st.insert(make_pair(i+1, j+1));
            i++;
            j--;
        }
        cout << st.size() << "\n";
        for (set<pair<int, int> >::iterator it=st.begin(); it!=st.end(); it++)
        {
            cout << (*it).first << " " << (*it).second << "\n";
        }        
    }
    return 0;
}