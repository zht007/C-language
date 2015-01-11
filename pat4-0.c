# include <stdio.h>
int main()
{
    int A;
    
    scanf("%d",&A);
    int B=A+1,C=A+2,D=A+3;
    
    int i,count=0;
    
    for(i=100;i<1000;i++)
    {
        if(((i/100 == A)||(i/100 == B)||(i/100 == C)||(i/100 == D)) && ((i%100/10 == A)||(i%100/10 ==B)||(i%100/10 ==C)||(i%100/10 ==D)) && ((i%10 == A)||(i%10 == B)||(i%10 == C)||(i%10 == D))&&(i/100 != i%100/10)&&(i%100/10 != i%10)&&(i/100!= i%10))
        {
            count++;
            printf("%d",i);
            if (count%6 == 0) {
                printf("\n");
            }           
	else printf(" ");
        }
        
    }
    return 0;
}
