# String Compression

Leetcode Problem Link - [here](https://leetcode.com/problems/string-compression/?envType=study-plan-v2&envId=leetcode-75)!

Youtube Video - 

### [Solution](/Array%20and%20Strings/443.%20String%20Compression/443.%20String%20Compression.cpp):

```cpp
    int compress(vector<char>& chars) {
        int n = chars.size();

        int i = 0; // iterate over the arrray
        int j = 0; // used to update the char and its count in the original orray

        while(i<n) {

            char currChar = chars[i];
            int cnt = 0;

            while(i<n && chars[i]==currChar) {
                i++;
                cnt++;
            }

            chars[j] = currChar;
            j++;

            if(cnt > 1) {
                for(char ch : to_string(cnt)) {
                    chars[j] = ch;
                    j++;
                }
            }
        }

        return j;
    }
```