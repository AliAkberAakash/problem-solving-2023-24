class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;

        while(start <= end) {
            while(start <= end && isNotACharacter(s[start])) {
                start++;
            }
            while(end >= 0 && isNotACharacter(s[end])) {
                end--;
            }
            if(start >= end){
                return true;
            } else {
                if(tolower(s[start]) == tolower(s[end])) {
                    start++;
                    end--;
                    continue;
                } else {
                    return false;
                }
            }
        }

        return true;
    }

    bool isNotACharacter(char c) {
        return !((c>='a' && c <='z') || (c>='A' && c <='Z') || (c>='0' && c <='9'));
    }
 
};
