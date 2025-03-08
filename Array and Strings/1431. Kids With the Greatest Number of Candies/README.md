# Kids With the Greatest Number of Candies

Leetcode Problem Link - [here](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75)!

Youtube Video - 

### [Solution](/Array%20and%20Strings/1431.%20Kids%20With%20the%20Greatest%20Number%20of%20Candies/1431.%20Kids%20With%20the%20Greatest%20Number%20of%20Candies.cpp):

```cpp
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0;
        for(int candy:candies) {
            if(candy > maxCandy){
                maxCandy = candy;
            }
        }
        vector<bool> res(candies.size());
        for(int i=0;i<candies.size();i++) {
            res[i] = (candies[i] + extraCandies >= maxCandy) ? true : false;
        }
        return res;
    }
```