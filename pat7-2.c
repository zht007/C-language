#include<stdio.h>
void compare (int n,long a, long b)
{
	if(a > b)
		{
		printf("case #%d: ture\n",n);
		}
	else
		{
		printf("case #%d: false\n",n);
		}
}

int main()
{
int num;
int i;
long A,B,C;
scanf("%d",&num);
for(i=1;i <= num;i++)
        {
        scanf("%ld %ld %ld",&A,&B,&C);
        compare(i,A+B,C);
        }
return 0;
}

