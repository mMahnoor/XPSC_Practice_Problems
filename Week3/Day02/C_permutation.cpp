#include <iostream>
#include <vector>
#include <map>

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
        cin >> n;

        vector<int> p(n);
        vector<vector<int> > v;
        for (int i = 0; i < n; i++)
        {
            vector<int> s;
            for (int j = 0; j < n-1; j++)
            {
                int val;
                cin >> val;
                s.push_back(val);
            }
            v.push_back(s);
        }
        int k=0;
        for (int j = 0; j < n-1; j++)
        {
            map<int, int> mp;
            map<int, int>::iterator it1, it2;
            for (int i = 0; i < n; i++)
            {
                mp[v[i][j]]++;
            }
            it1=mp.begin();
            it2 = ++mp.begin();
            if(it1->second>it2->second) 
            {
                p[k]=it1->first;
                if(n%2!=0 && ((n-1)/2)-1==j) p[++k]=it2->first;
                k++;
            }
            else if(it1->second<it2->second) 
            {
                p[k]=it2->first;
                if(n%2!=0 && ((n-1)/2)-1==j) p[++k]=it1->first;
                k++;
            }
            else
            {
                map<pair<int, int>, int> match;
                map<pair<int, int>, int>::iterator match1, match2;
                for (int i = 0; i < n; i++)
                {
                    pair<int, int> m1;
                    if(v[i][j-1]==p[k-1]) 
                    {
                        m1 = make_pair(v[i][j],p[k-1]);
                        match[m1]++;
                    }
                } 
                match1=match.begin();
                match2 = ++match.begin();

                if(match1->second > match2->second) 
                {
                    p[k]=match1->first.first;
                    p[++k]=match2->first.first;
                    k++;
                }
                else 
                {
                    p[k]=match2->first.first;
                    p[++k]=match1->first.first;
                    k++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}