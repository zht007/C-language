#include <stdio.h>
 
int main()
{
    int number, n;
    scanf("%d %d", &number, &n);
    int i;
    int cnt = 0;
    int inp;
    for(i = 1; i < 100; i++)
    {
        scanf("%d", &inp);
        cnt++;
        if(inp < 0) {
            printf("Game Over");
            break;
        }
        if(inp == number) {
            if(cnt == 1) {
                printf("Bingo!");break;
            }
            else if(cnt == 2 || cnt == 3) {
                printf("Lucky You!");break;
            }
            else if(cnt > 3 && cnt <= n) {
                printf("Good Guess!");break;
            }
            else if(cnt > n) {
                printf("Game Over");break;
            }
        }
        else if(inp > number) {
                printf("Too big\n");
        }
        else if(inp < number) {
                printf("Too small\n");    
        }
    }
    
    return 0;
}
