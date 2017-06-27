#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
printf("%d",i);
c++;
}
}
printf("%d",c);
getch();
return 0;
}
