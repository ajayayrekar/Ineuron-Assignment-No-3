#include <stdio.h>

int main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0 && num % 3 == 0) {
    printf("The number is divisible by 2 and 3.\n");
  } else {
    printf("The number is not divisible by 2 and 3.\n");
  }

  return 0;
}
