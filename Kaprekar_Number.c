#include <stdio.h>
#include <math.h>

int is_kaprekar(int n) {
    if (n == 1) return 1; // 1 is a Kaprekar number

    int sq_n = n * n;
    int num_digits = (int)log10(sq_n) + 1;

    for (int i = 1; i < num_digits; i++) {
        int eq_parts = pow(10, i);
        
        if (eq_parts == n) continue; // Avoid splitting where one part is 0

        int sum = sq_n / eq_parts + sq_n % eq_parts;

        if (sum == n) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_kaprekar(n)) {
        printf("%d is a Kaprekar number.\n", n);
    } else {
        printf("%d is not a Kaprekar number.\n", n);
    }

    return 0;
}
