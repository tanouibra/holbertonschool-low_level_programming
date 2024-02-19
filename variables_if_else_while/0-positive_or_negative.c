#include <stdio.h>
/**
 *main - main block
 * Return: 0
 */
int main() {
int n;
srand(time(0));
n = randon() % RAND_MAX;
printf("The number %d is ", n);
if (n > 0) {
printf("est positif");}
else if (n == 0) {
printf("Vaur zero");}
else {
printf("est negatif");}
printf("\n");
}
