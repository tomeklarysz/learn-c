#include <stdio.h>
#include <string.h>


int globalvar = 100;
main() {
  
  char firstLetter = 'T';

  int age = 19;
  
  printf("I am %d years old\n", age);

  // size of datatypes:
  printf("char takes up %ld bytes\n", sizeof(char));
  printf("int takes up %ld bytes\n", sizeof(int));
  printf("long int takes up %ld bytes\n", sizeof(long int));
  printf("float takes up %ld bytes\n", sizeof(float));
  printf("double takes up %ld bytes\n", sizeof(double));
}