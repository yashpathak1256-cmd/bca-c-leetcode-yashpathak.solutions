int reverse(int x) {
    long rev = 0;
    
    while (x != 0) {
        int rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
        
        // Check for 32-bit integer overflow limits
        if (rev > 2147483647 || rev < -2147483648) {
            return 0;
        }
    }
    
    return (int)rev;
}
