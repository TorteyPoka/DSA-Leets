#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        int start = 0, end = size - 1;

        sort(nums.begin(), nums.end(), greater<>());

        while (start < end)
        {
            long long sum = nums[start] + nums[end];

            if(sum == target)
                return {start, end};

            if (nums[start] >= target)
            {
                start++;
                continue;
            }
            
            if(sum > target)
                end--;
            else
             start++;
        }
        return {-1, -1};
    }
};

int main()
{
}