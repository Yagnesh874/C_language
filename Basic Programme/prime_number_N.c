#include <stdio.h>
#include <stdbool.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2 || n == 3) {
        return 1; 
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; 
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return true;
}


void prime_range(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    
    prime_range(start, end);

    return 0;
}
