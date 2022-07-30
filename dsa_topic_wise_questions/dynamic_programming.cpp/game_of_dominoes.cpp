#include<bits/stdc++.h>
vector<int> getMin(vector<int> &arr, int n, int k)
{
    auto &x = arr;
    // Declaring vector array for storing cost for each window.
    vector<int> res;
    for (int i = 0; i + k <= n; i++)
    {
        // Declaring window [ i , i + k ].
        vector<int> temp(begin(x) + i, begin(x) + i + k);
        // Sorting to get median easily, also  nth_element in c++ stl could be used instead.
        // Median  = temp[k / 2]
        sort(begin(temp), end(temp));
        int cost = 0;
        int median = temp[k / 2];
        // Calculating cost by adding all the cost to convert each element to median.
        for (int x : temp)
        {
            cost += abs(x - median);
        }
        res.emplace_back(cost);
    }
    return res;
}