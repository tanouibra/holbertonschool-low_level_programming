#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - main block
 * Return: 0
 */
int main(void) {
int n;
srand(time(0));
n = randon() - RAND_MAX / 2;
printf("The number %d is ", n);
if (n > 0) {
printf("is positive");}
else if (n == 0) {
printf("is zero");}
else {
printf("is negative");}
printf("\n");
}
