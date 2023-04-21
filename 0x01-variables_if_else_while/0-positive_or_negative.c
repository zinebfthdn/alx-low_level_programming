#include<stdio.h>
#include<stdlib.h>
/**
*if the number is greater than 0: is positive
*if the number is 0: is zero
*if the number is less than 0: is negative
*/
int main(){
int n;
printf("Write a number :");
scanf("%d",n);
if (n>0){
printf("%d is positive", n);
}
else if (n<0)
{
printf("%d is negative", n);
}
else if (n==0)
{
printf("%d is zero", n);
}
return (n);
}

