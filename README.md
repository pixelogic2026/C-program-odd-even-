# C-program-odd-even-
exploring  different methods of approaching the odd/even series 
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("enter the numbers");
scanf("%d",&a);
b=a/2;
c=b*2;
d=c-a;
if(d==0);
printf("even number");
else
printf("odd number");
}
