#include <stdio.h>
#include <string.h>

void main() {

  printf("\n");
 
  char wholename[12] = "Derek Banas";

  int primeNums[3] = {2, 3, 5,};

  // You don't need to define the size if you define the values up front
  int morePrimes[] = {13, 17, 19, 23};

  char yourCity[30];
  printf("What city do you live in? ");
  fgets(yourCity, 30, stdin);
  printf("Hello %s\n\n", yourCity);
}