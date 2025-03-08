# Increasing Triplet Subsequence

Leetcode Problem Link - [here](https://leetcode.com/problems/increasing-triplet-subsequence/?envType=study-plan-v2&envId=leetcode-75)!

Youtube Video - https://www.youtube.com/watch?v=vB4ObI8R6zc

### [Solution](/Array%20and%20Strings/334.%20Increasing%20Triplet%20Subsequence/334.%20Increasing%20Triplet%20Subsequence.cpp):

```cpp
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();

        int firstNum = INT_MAX;
        int secondNum = INT_MAX;

        for(int i=0;i<n;i++) {
             int thirdNum = nums[i];

            // check for the first smallest number
            if(thirdNum <= firstNum) {
                firstNum = thirdNum;
            } else if (thirdNum <= secondNum) {
                // check for the second smallest number
                secondNum = thirdNum;
            } else {
                return true;
            }
        }

        return false;
    }
```