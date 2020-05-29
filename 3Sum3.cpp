#Time limit exceeded
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<vector<int>>::iterator it;
        int target = 0;
        int size = nums.size();
        if (size != 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = i + 1; j < size; j++)
                {
                    for (int k = j + 1; k < size; k++)
                    {
                        if (target == (nums[i] + nums[j] + nums[k]))
                        {
                            vector<int> out{nums[i], nums[j], nums[k]};
                            result.push_back(out);
                        }
                    }
                }
            }
        }
        for (int i = 0; i < result.size(); i++)
        {
            std::sort(result[i].begin(), result[i].end());
        }
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = i + 1; j < result.size(); j++)
            {
                if (result[i] == result[j])
                {
                    it = find(result.begin(), result.end(), result[j]);
                    result.erase(it);
                    j--;
                }
            }
        }

        return result;
    }
};

