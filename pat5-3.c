# include<stdio.h>
int main()
{
int a,n;
scanf("%d %d",&a,&n);
int S=0;
int i,b=a;

for(i=0;i<n;i++)
{
S+=b;
b=b*10+a;
//printf("S=%d b=%d\n",S,b);
}
printf("%d\n",S);
}
