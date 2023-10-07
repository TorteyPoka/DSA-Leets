#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        int temp[size];
        int start = 0, end = size - 1;
        int val1, val2;

        for (int i = 0; i < size; i++)
            temp[i] = nums[i];

        sort(temp, temp + size, greater<>());

        while (start < end)
        {
            long long sum = temp[start] + temp[end];

            if (sum == target)
            {
                val1 = temp[start], val2 = temp[end];
                break;
            }
            if (sum > target)
                end--;
            else
                start++;
        }

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == val1)
                start = i;
            
            else if (nums[i] == val2)
                end = i;
        }
        return {start, end};
    }
};

int main()
{
}