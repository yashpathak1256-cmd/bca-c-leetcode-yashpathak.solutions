int lengthOfLongestSubstring(char* s) {
    int maxLen = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        int visited[256] = {0};
        int currentLen = 0;
        
        for (int j = i; s[j] != '\0'; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break;
            }
            visited[(unsigned char)s[j]] = 1;
            currentLen++;
        }
        
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }
    
    return maxLen;
}
