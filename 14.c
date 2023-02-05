#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 7 == 0) {
        printf("The number is divisible by both 3 and 7\n");
    } else if (n % 3 == 0) {
        printf("The number is divisible by 3\n");
    } else if (n % 7 == 0) {
        printf("The number is divisible by 7\n");
    } else {
        printf("The number is not divisible by 3 or 7\n");
    }

    return 0;
}
