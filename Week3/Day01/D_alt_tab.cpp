#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	map<string, int> mp;
	list<pair<int,string> > l;
	for(int i=1; i<=N; i++)
	{
	    string s;
	    cin >> s;
	    if(mp.find(s)!=mp.end())
	    {
	        mp[s]=i;
	    }
	    else mp[s]=i;
	}
	for(auto it=mp.begin(); it!=mp.end(); it++)
	{
	    string s=it->first;
	    int i=it->second;
	    l.push_back(make_pair(i,s));
	    
	}
	l.sort();
	for(auto it=l.rbegin(); it!=l.rend(); it++)
	{
	    string s=(*it).second;
	    if(s.size()>2)
	    {
	        cout << s.substr(s.size()-2);
	    }
	    else cout << s;
	    
	}
	
	return 0;
}
