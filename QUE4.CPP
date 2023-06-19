// write a programme to find the formula's answer (x-y)*2

#include<stdio.h>
#include<conio.h>

void main(){
int x,y,z;
clrscr();
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
z = (x-y)*2;
printf("answer is %d",z);
getch();
}