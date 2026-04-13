#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int calculateDays(vector<int> &weights, int capacity)
    {
        int currentWeight = 0;
        int days = 1;

        for (int weight : weights)
        {
            if (currentWeight + weight > capacity)
            {
                days++;
                currentWeight = weight;
            }
            else
            {
                currentWeight += weight;
            }
        }

        return days;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int low = 0;
        int high = 0;
        int ans = 0;

        for (int w : weights)
        {
            low = max(low, w);
            high += w;
        }

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (calculateDays(weights, mid) <= days)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};