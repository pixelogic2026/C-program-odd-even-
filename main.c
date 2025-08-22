/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    b=a%2;
    if(b==0)
    printf("even number");
    else
    printf("odd number");
}