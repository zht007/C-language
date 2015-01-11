# include<stdio.h>
void sound(int input)

{
int count=0;
int n=input;
int f=1;
if(n<0)n*=-1;

	do 
	{
	n/=10;
	count++;
	f*=10;
	}
	while(n>0);
	f/=10;
	
if(input<0)
	{
	input*=-1;
	printf("fu ");
	}
int i;
for(i=1;i<count;i++)	
	{
	n=input/f;
	switch(n)
		{
		case(0): printf("ling ");break;	
		case(1): printf("yi ");break;
		case(2): printf("er ");break;
		case(3): printf("san ");break;
		case(4): printf("si ");break;
		case(5): printf("wu ");break;
		case(6): printf("liu ");break;
		case(7): printf("qi ");break;
		case(8): printf("ba ");break;
		case(9): printf("jiu ");break;
		}
	input%=f;
	f/=10;
	}	
n=input/f;
	switch(n)
		{
		case(0): printf("ling");break;	
		case(1): printf("yi");break;
		case(2): printf("er");break;
		case(3): printf("san");break;
		case(4): printf("si");break;
		case(5): printf("wu");break;
		case(6): printf("liu");break;
		case(7): printf("qi");break;
		case(8): printf("ba");break;
		case(9): printf("jiu");break;
		}
printf("\n");
}
//int main()
//{
//long long n;
//int sum = 0;
//scanf("%lld",&n);
//while(n != 0)
//{
//sum += (n % 10);
//n /= 10;
//}
//printf("%d\n",sum);
//}


int main()
{
char ch;
int n,sum=0;
do
{
	scanf("%c",&ch);
	n=ch-'0';
	if(ch != '\n')	sum +=n;
}
while(ch != '\n');
printf("%d\n",sum);
sound(sum);
}
