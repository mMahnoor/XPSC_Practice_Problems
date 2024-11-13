#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        int i=0, j=0;
        long long int max_sum=0, sum=0;
        
        while(j<arr.size())
        {
            sum+=arr[j];
            if(j-i+1==k)
            {
                if(sum>max_sum) max_sum=sum;
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return max_sum;
    }
};
