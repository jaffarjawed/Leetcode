#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> results(2);
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (target == nums[i] + nums[j])
                {
                    results[0] = i;
                    results[1] = j;
                    return results;
                }
            }
        }
        return results;
    }
};
