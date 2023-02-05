#include <stdio.h>

int main() {
  char alphabet;

  printf("Enter an alphabet: ");
  scanf("%c", &alphabet);

  if (alphabet >= 'A' && alphabet <= 'Z') {
    printf("Uppercase\n");
  } else if (alphabet >= 'a' && alphabet <= 'z') {
    printf("Lowercase\n");
  } else {
    printf("Not an alphabet\n");
  }

  return 0;
}
