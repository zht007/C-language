# include <stdio.h>
int main ()
{
int marks;

scanf("%d",&marks);

switch (marks/=10) // very important
	{
	case 10:   // skill got
	case 9:
	printf("A\n");
	break;
        case 8:
        printf("B\n");
        break;
        case 7:
        printf("C\n");
        break;
        case 6:
        printf("D\n");
        break;
	default:
	printf("E\n");
	break;
	}
}
