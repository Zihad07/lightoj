#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int arr[],
                    int n,
                    int k)
{

    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        if (sum == k)
            maxLen = i + 1;

        if (um.find(sum) == um.end())
            um[sum] = i;

        if (um.find(sum - k) != um.end())
        {

            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }
    return maxLen;
}

int main()
{
    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    cout << "Length = "
         << lenOfLongSubarr(arr, n, k);
    return 0;
}
