class Solution {
public:
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
};
