int myAtoi(char* s) {
    int i = 0;
    long r = 0;
    int f = 1;
    while (s[i] == ' ') {
        i++;
    }
    if (s[i] == '-') {
        f = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
        r = r * 10 + (s[i] - '0');
        if (f == 1 && r > 2147483647) return 2147483647;
        if (f == -1 && -r < -2147483648) return -2147483648;
        i++;
    }
    return (int)(r * f);
}
