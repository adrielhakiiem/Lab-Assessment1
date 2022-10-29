#include <stdio.h>
#include <math.h>

int main()
{
    double i = 0;
    int question = 1;

    printf("Would you like the numbers that are multiple of 4.5 or 5?  (Enter 1 for 4.5 and 2 for 5)\n");
    scanf("%d", &question);
    //number, square, cube
    printf("number\t\t\t\t\t\tsquare\t\t\t\t\t\tcube\n");

    for (i; i <= 10000; i++) {
      if (question == 1 && fmod(i, 4.5) == 0) {
        printf("%.6f\t\t\t\t\t%.6f\t\t\t\t\t%.6f\t\t\t\t\n", i, i*i, i*i*i);
      } else if (question == 2 && fmod(i, 5) == 0) {
          printf("%.6f\t\t\t\t\t%.6f\t\t\t\t\t%.6f\t\t\t\t\t\n", i, i*i, i*i*i);
      }
    }
}
