#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
while(a>9)
{
b=0;
while(a>0)
{
c=a%10;
b+=c;
a=a/10;
}
a=b;
}
printf("%d",b);
}