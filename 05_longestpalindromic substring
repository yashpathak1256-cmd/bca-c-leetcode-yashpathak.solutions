char* longestPalindrome(char* s) {
    int start = 0, maxLength = 1;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            // Check if substring from i to j is a palindrome
            int flag = 1;
            int l = i, r = j;
            while (l < r) {
                if (s[l] != s[r]) {
                    flag = 0;
                    break;
                }
                l++;
                r--;
            }
            
            if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
    
    // Allocate memory to return the substring
    char* result = (char*)malloc((maxLength + 1) * sizeof(char));
    for (int i = 0; i < maxLength; i++) {
        result[i] = s[start + i];
    }
    result[maxLength] = '\0';
    
    return result;
}
