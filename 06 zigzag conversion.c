char* convert(char* s, int numRows) {
    int len = strlen(s);
    if (numRows <= 1 || numRows >= len) {
        char* copy = (char*)malloc((len + 1) * sizeof(char));
        strcpy(copy, s);
        return copy;
    }
    
    char* result = (char*)malloc((len + 1) * sizeof(char));
    int k = 0;
    int cycle = 2 * numRows - 2;
    
    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < len; j += cycle) {
            result[k++] = s[j];
            
            // Middle rows get an extra diagonal character
            int diag = j + cycle - 2 * i;
            if (i > 0 && i < numRows - 1 && diag < len) {
                result[k++] = s[diag];
            }
        }
    }
    
    result[k] = '\0';
    return result;
}
