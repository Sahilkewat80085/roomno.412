#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,op;
printf("1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
printf("Enter a First integer:");
scanf("%d",&a);
printf("Enter a Second integer:");
scanf("%d",&b);
printf("Enter your choice to perform a operation:");
scanf("%d",&op);
switch(op){
case 1 :
printf("Sum of %d and %d is %d",a,b,a+b);
break;
case 2 :
printf("Difference of %d and %d is %d",a,b,a-b);
break;
case 3 :
printf("Multiplication of %d and %d is %d",a,b,a*b);
break;
case 4 :
printf("Division of %d and %d is %d",a,b,a/b);
break;
default :
printf("N/A");
break;
}
return 0;
}
