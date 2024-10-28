// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

#include <iostream>

using namespace std;


int main()
{
    int N;
    cin >> N;

    int arr[N];
    long long int total_sum=0;
    for (int i = 0; i < N; i++)
    {      
        cin >> arr[i];        
    }
    for (int i = 0; i < N; i++)
    {
        total_sum+=arr[i];
                
    }
    long long int max_sum = 0;
    if(total_sum%2==0) max_sum=total_sum;
    else
    {
        long long int smallest_odd=9999999999;
        for (int i = 0; i < N; i++)
        {
            
            if(arr[i]%2!=0)
            {
                if(arr[i]<smallest_odd) smallest_odd=arr[i];
            }
            
        }
        if(smallest_odd!=9999999999) max_sum=total_sum-smallest_odd;
    }
    cout << max_sum << "\n";

    return 0;
}