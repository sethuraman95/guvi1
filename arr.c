#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[50],b[50],n,t;
clrscr();
scanf("\n %d",&n);
for(i=0;i<n;i++)
{
scanf("\n %d",&a[i]);
a[i]=b[i];
}
for(j=0;j<n;j++)
{
scanf("\n %d",&a[j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]>b[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
t=b[i];
b[i]=b[j];
b[j]=t;
}
else if(b[i]==b[i+1])
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
}
for(i=0;i<n;i++)
{
printf("\n %d",a[i]);
}
getch();
}
