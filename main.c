// Author:Michael Sullivan
// Olivia Mandola ovm5126@psu.edu
// Dymea Schippers dxs5940@psu.edu
//Section 11r
//Breakout11
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n);
void print_n(const char *s, int n);


int main(void) {


 char* numHold = readline("Enter an int: ");
 int n = atoi(numHold);
 int total = sum_n(n);
  printf("sum is %d\n", total);
  char* s = readline("Enter a string: ");
 print_n(s, n);
return 0;
}

int sum_n(int n){
  if (n <= 0){
    return 0; }
  else {
    return n+sum_n(n-1);
    }
}

void print_n(const char *s, int n){
  if (n >= 1) {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

