# Merge Strings Alternately

Leetcode Problem Link - [here](https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=leetcode-75)!

Youtube Video - 

### [Solution](/Array%20and%20Strings/1768.%20Merge%20Strings%20Alternately/1768.%20Merge%20Strings%20Alternately.cpp):

```cpp
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string ans="";
        while(i<word1.length() || i<word2.length()) {
            if(i<word1.length()) {
                ans+=word1[i];
            }
            if(i<word2.length()) {
                ans+=word2[i];
            }
            i++;
        }
        return ans;
    }
```