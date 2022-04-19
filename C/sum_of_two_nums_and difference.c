#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
	scanf("%d %d",&x,&y);
    float a,b;
    scanf("%f %f",&a,&b);
    
    printf("%d %d\n",x+y,x-y);
    printf("%0.1f %0.1f",a+b,a-b);
    
    return 0;
}
