#include <stdio.h>

int main () {
  int i;
  int countTo;
  
  printf("Let's play FizzBuzz! What number should I count to? ");
  scanf("%i", &countTo);
  
  for (i = 1; i <= countTo; i++) {
    if (i%3 == 0 && i%5 == 0) {
      printf("FizzBuzz (%i)\n", i);
    } else if (i%3 == 0) {
      printf("Fizz (%i)\n", i);
    } else if (i%5 == 0) {
      printf("Buzz (%i)\n", i);
    } else {
      printf("%i\n", i);
    }
  }
}

// 3m 48s 76