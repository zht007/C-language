# include<stdio.h>
int main()
{
int cnt;
char ch;
scanf("%c",&ch);
while(ch != '.')
	{
	while(ch == ' ')
		{
		scanf("%c",&ch);
		}
	for(cnt=0;ch != ' ' && ch != '.';cnt++)
		{
		scanf("%c",&ch);
		}
	printf("%d",cnt);
	if(ch == ' ')
		{
		printf(" ");
		}
	else if(ch == '.') break;
	while(ch == ' ')
		{
		scanf("%c",&ch);
		}
//	if(ch == '.') break;
	}
//printf("\n");
return 0;
}
