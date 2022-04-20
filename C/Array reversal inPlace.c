
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int tmp;
    for(int i = 0 ,j=num-1; i<num/2 ; i++,j--){
        tmp = arr[j];
        arr[j]=arr[i];
        arr[i]=tmp;
    }
    for(int i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        free(arr);
    return 0;
}
