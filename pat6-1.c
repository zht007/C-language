# include<stdio.h>
int main()
{
int n = 0,result= 0;
char ch = '1';
int flag = 0;
scanf("%d",&result);

do{
	scanf("%c",&ch);
	if(ch == '='){
	break;
	}
	scanf("%d",&n);
	if(ch == '+'){
	result += n;
	}
	else if(ch == '-'){
	result -= n;
	}
	else if(ch == '*'){
	result *= n;
	}
	else if(ch == '/'){
		if (n == 0){
		flag=1;
		break;
		}
	result /= n;
	}
	else flag = 1;
	
}
while(ch != '=');
if(flag == 0){ 
printf("%d\n",result);
}
else{
printf("ERROR\n");
}
return 0;
}
