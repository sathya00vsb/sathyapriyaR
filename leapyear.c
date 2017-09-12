#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("Enter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("It is leap year");
}
else
{
printf("It is not a leap year");
}
}
