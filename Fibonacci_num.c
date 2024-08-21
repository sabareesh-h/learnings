#include <stdio.h>

int lucas(int n) {
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;
    return lucas(n - 1) + lucas(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Lucas number L(%d) = %d\n", n, lucas(n));

    return 0;
}