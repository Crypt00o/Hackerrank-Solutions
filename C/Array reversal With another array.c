#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, *arrrev;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    arrrev = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
for (int i=0,j=num-1; i <num ;i++,j--){
    arrrev[i]=arr[j];
}
for(int i = 0; i < num; i++)
        *(arr+i)=*(arrrev+i);


    

    for(int i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        free(arr);free(arrrev);
    return 0;
}
