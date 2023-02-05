#include <stdio.h>

int main(void) {
  float marks[5];
  int i, passed = 1;

  for (i = 0; i < 5; i++) {
    printf("Enter marks of subject %d: ", i + 1);
    scanf("%f", &marks[i]);
    if (marks[i] < 33) {
      passed = 0;
    }
  }

  if (passed) {
    printf("Candidate has passed the examination.\n");
  } else {
    printf("Candidate has failed the examination.\n");
  }

  return 0;
}
