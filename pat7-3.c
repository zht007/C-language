#include<stdio.h>
#include<math.h>

// Is Prime Algorithm 
int isPrime(int x)
{
int ret = 1;
int i;
if ( x ==1 || (x%2 == 0 && x != 2))
	{
	ret = 0;
	}
for (i=3; i<=sqrt(x);i+=2)
	{
	if ( x%i == 0)
		{
		ret = 0;
		break;
		}
	}
return ret;
}
//......................

int main()

{
int Pm,Pn;
scanf("%d %d",&Pm,&Pn);
int length = Pn;
int Prime[length];
int i,x=1;
int flag;
for (i=0; i<length; i++)
	{
	flag = 0;	
	while(flag == 0)	
	{
	if( isPrime(x) )
		{
		Prime[i] = x;
		flag = 1;
		}
	x++;
	}
	}
// test
//for (i=Pm-1;i<length;i++)
//{
//printf("%d ",Prime[i]);
//}
//printf("\n");
//

int cnt = 0;
for (i=Pm-1;i<length-1;i++)
{
cnt++;
printf("%d",Prime[i]);
if(cnt%10 == 0) printf("\n");
else printf(" ");

}

printf("%d\n",Prime[i]);

return 0;
}


