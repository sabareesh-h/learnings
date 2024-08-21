#include <stdio.h>
void printPascal(int n)
{
    for (int line = 1; line <= n; line++) {
        for (int space = 1; space <= n - line; space++)
            printf("  ");
        // used to represent C(line, i)
        int coef = 1;
        for (int i = 1; i <= line; i++) {
            // The first value in a line
            // is always 1
            if (i == 1 || i == line) {
                printf("%4d", 1);
            } else {
                printf("    ");  // Print spaces for non-1 elements
            }
           
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }
}
void printPascalinv(int n)
{
    for (int line = n; line >= 1; line--) {
        for (int space = 1; space <= n - line; space++)
            printf("  ");
        
        for (int i = 1; i <= line; i++) {
            // Only print 1, skip others
            if (i == 1 || i == line) {
                printf("%4d", 1);
            } else {
                printf("    ");  // Print spaces for non-1 elements
            }
        }
        printf("\n");
    }
}
// Driver code
int main()
{
    int n = 5;
    printPascal(n);
    printPascalinv(n);
    return 0;
}