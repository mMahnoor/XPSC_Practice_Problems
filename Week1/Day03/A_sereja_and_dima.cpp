#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> cards;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        cards.push_back(num);
    }
    int sereja=0, dima=0, turn=1;
    while(!cards.empty())
    {
        int L = cards.front();
        int R = cards.back();
        int max_num = max(L,R);

        if(turn%2!=0) sereja+=max_num;
        else dima+=max_num;

        if(max_num==L) cards.pop_front();
        else cards.pop_back();
        turn++;
    }
    cout << sereja << " " << dima << "\n";
    return 0;
    
}