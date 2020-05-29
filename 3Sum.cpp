#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int> > threeSum(vector<int> &nums)
    {
        vector<vector <int>> result(0);
        if (nums.size() > 2){
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                int low = i + 1; 
                int high = nums.size() - 1;
                int sum = 0 - nums[i];
                while(low < high){
                    if ( nums[low] + nums[high] == sum){
                        vector<int> vec = {nums[i], nums[low], nums[high]};
                        result.push_back(vec);
                        while(low < high && nums[low] == nums[low + 1]){
                            low++;
                        }
                        while(low < high && nums[high] == nums[high - 1]){
                            high--;
                        }
                        low++;
                    }
                    else if ((nums[low] + nums[high]) < sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
    }
        
        return result;
    };
};
