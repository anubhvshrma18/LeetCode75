# Reverse Vowels of a String

Leetcode Problem Link - [here](https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75)!

Youtube Video - 

### [Solution](/Array%20and%20Strings/345.%20Reverse%20Vowels%20of%20a%20String/345.%20Reverse%20Vowels%20of%20a%20String.cpp):

```cpp
    string reverseVowels(string s) {
        int i=0, j=s.length();
        while(i<j) {
            if(isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i],s[j]);
                i++, j--;
            } else if (isVowel(s[i])){
                j--;
            } else if (isVowel(s[j])){
                i++;
            } else {
                i++,j--;
            }
            
        }
        return s;
    }
    
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
            return true;
        return false;
    }
```