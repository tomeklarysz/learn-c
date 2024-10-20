#include <stdio.h>

void main() {

  typedef union {
    short individual;
    float ounce;
    float pound;
  } amount;
  
  amount orangeAmt = {.ounce = 16};
  orangeAmt.individual = 4;
  printf("Orange juice amount: %.2f : Size: %d\n\n",
    orangeAmt.ounce, sizeof(orangeAmt.ounce));
  
  // printf("Number of oranges: %d : Size: %d\n\n",
  //   orangeAmt.individual, sizeof(orangeAmt.individual));

  // change to %f
  printf("Number of oranges: %f : Size: %d\n\n",
    orangeAmt.individual, sizeof(orangeAmt.individual));
  
  printf("orangeAmt memory location: %d\n\n", &orangeAmt);
  printf("orangeAmt.ounce memory location: %d\n\n", &orangeAmt.ounce);
  printf("orangeAmt.individual memory location: %d\n\n", &orangeAmt.individual);

  orangeAmt.pound = 1.5;

  printf("Orange juice amount: %.2f : Size: %d\n\n",
    orangeAmt.pound, sizeof(orangeAmt.pound));
  
  printf("orangeAmt.pound memory location: %d\n\n", &orangeAmt.pound);
}