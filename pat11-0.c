#include<stdio.h>

int main
{
struct vector
	{
	float x;
	float y;;
	} v1,v2, v_sum;;
scanf("%f %f %f %f",&v1.x,&v1.y,&v2.x,&v2.y);

v_sum.x = v1.x + v2.x;
v_sum.y = v1.y + v2.y;
printf("(%.1f, %.1f)\n",v1.x,v1.y);
printf("(%.1f, %.1f)\n",v2.x,v2.y);
printf("(%.1f, %.1f)\n",v_sum.x,v_sum.y);
} 




