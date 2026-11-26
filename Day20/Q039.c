#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    long long product = 1;
    int odd_found = 0;
    
    if (n == 0) {
        printf("1\n");
        return 0;
    }
    
    if (n < 0) {
        n = -n;
    }
    
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            odd_found = 1;
        }
        n /= 10;
    }
    
    if (!odd_found) {
        product = 1;
    }
    
    printf("%lld\n", product);
    return 0;
}