#include <stdio.h>

int main(void) {
  float costPrice, sellingPrice, profitOrLoss;

  printf("Enter the cost price: ");
  scanf("%f", &costPrice);

  printf("Enter the selling price: ");
  scanf("%f", &sellingPrice);

  if (sellingPrice > costPrice) {
    profitOrLoss = (sellingPrice - costPrice) / costPrice * 100;
    printf("The product is sold at a profit of %.2f%%\n", profitOrLoss);
  } else if (sellingPrice < costPrice) {
    profitOrLoss = (costPrice - sellingPrice) / costPrice * 100;
    printf("The product is sold at a loss of %.2f%%\n", profitOrLoss);
  } else {
    printf("The product is sold at cost price, no profit or loss\n");
  }

  return 0;
}
