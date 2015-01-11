# include<stdio.h>
int main()
{
int n,N;
scanf ("%d %d",&n,&N);

int input;
int count=0;

do
	{
	scanf("%d",&input);
	count++;
	if(input < 0) break;
	else if (count > N) break;
	else if(input > n)
		{
		printf("Too big\n");	
		}
	else if(input < n)
		{
		printf("Too small\n");	
		}
	}
while(input != n );

if(input<0) printf("Game Over\n");
else if(count>N) printf("Game Over\n");
else if(count==1) printf("Bingo!\n");
else if(count<=3) printf("Luck You!\n");
else if(count>3) printf("Good Guess!\n");
}
