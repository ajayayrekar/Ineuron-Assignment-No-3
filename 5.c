#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n >= 100 && n <= 999)
        printf("%d is a three-digit number\n", n);
    else
        printf("%d is not a three-digit number\n", n);
    return 0;
}
