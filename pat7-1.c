#include<stdio.h>
void convert(int n,char ch)
{
for(;n !=0; n--)
{
printf("%c",ch);
}
}

int main()
{
int input;
int i;
scanf("%d",&input);
convert(input/100,'B');
convert(input/10%10,'S');
for(i = 1; i < input%10+1;i++)
{
printf("%d",i);
}
printf("\n");
}
