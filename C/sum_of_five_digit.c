#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int recursive_sum(int num){
if(num==0)
return 0;
int y=num%10;
y=num-y;
y=num/10;
return num%10 + recursive_sum(y);
}
int main() {
	
    int n;
    scanf("%d", &n);
    printf("%d",recursive_sum(n));
    return 0;
}
