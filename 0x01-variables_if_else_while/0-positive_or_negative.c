#include <time.h>
#include<stdio.h>
#include<stdlib.h>
/**
*main: beginning of the code
*if the number is greater than 0: is positive
*if the number is 0: is zero
*if the number is less than 0: is negative
*/
int main(void){
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0){
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return n;
}
