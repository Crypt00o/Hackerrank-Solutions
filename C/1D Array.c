#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>





int main() {
    int arrsize,sum=0;
    
scanf("%d",&arrsize);
int * arr = (int*) malloc(arrsize*sizeof(int));
    for(int i =0 ;i<arrsize;i++){
        scanf("%d",arr+i);
        sum+=arr[i];
    }
    free(arr);
    printf("%d",sum);

    return 0;
}
