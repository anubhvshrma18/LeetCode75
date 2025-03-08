# Greatest Common Divisor of Strings

Leetcode Problem Link - [here](https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75)!

Youtube Video - 

### [Solution](/Array%20and%20Strings/1071.%20Greatest%20Common%20Divisor%20of%20Strings/1071.%20Greatest%20Common%20Divisor%20of%20Strings.cpps):

```cpp
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 == str2+str1) {
            int gcd = getGCD(str1.length(), str2.length());
            return str1.substr(0,gcd);
        } else {
            return "";
        }
    }
    
    int getGCD(int a, int b) {
        while(b%a != 0) {
            int temp = b%a;
            b = a;
            a = temp;
        }
        return a;
    }
```