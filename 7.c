#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;
  double discriminant, root1, root2;

  printf("Enter the coefficients of the quadratic equation (a, b, c): ");
  scanf("%lf%lf%lf", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Real and distinct roots: %.2lf and %.2lf\n", root1, root2);
  } else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("Real and equal roots: %.2lf and %.2lf\n", root1, root2);
  } else {
    printf("Imaginary roots\n");
  }

  return 0;
}
