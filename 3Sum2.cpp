#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<int>::iterator it;
        int target = 0;
        int diff;
        int size = nums.size();
        //sort(nums.begin(), nums.end());
        if (size != 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = i + 1; j < size; j++)
                {
                    diff = target - (nums[i] + nums[j]);
                    it = std::find(nums.begin() + j + 1, nums.end(), diff);
                    if (it != nums.end())
                    {
                        vector<int> ans = {nums[i], nums[j], diff};
                        result.push_back(ans);
                    }
                }
            }
        }
        for (int i = 0; i < result.size(); i++)
        {
            sort(result[i].begin(), result[i].end());
        }
        sort(result.begin(), result.end());
        result.erase(std::unique(result.begin(), result.end()), result.end());
        return result;
    };
};
