#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printarr(int * arr, int nsize){
    for (int i = 0 ; i<nsize ;i++ )
    printf("%d ",*(arr+i));
    printf("\n");
}
void arr_play(int * arr , int start, int end ,int n ){
    for(int i = start ; i<end; i++)
     arr[i]=n;
}
int main() 
{

    int n;
    scanf("%d", &n);
    int nsize=(n*2)-1;
    int start=0,end=nsize,ncpy=n;
    
    int * arr = (int*)malloc(nsize*sizeof(nsize));
    while(n!=0){
    arr_play(arr,start,end,n);
    printarr(arr, nsize);
    start++;
    end--;
    n--;
    }
    
    n++;
    n++;
    start--;
    end++;
    
    while(n<=ncpy)
    {
      arr_play(arr,start,end,n);
    printarr(arr, nsize);
    start--;
    end++;
    n++;  
    }
    //printf("\n\n n=%d\n start=%d\n end=%d\n",n,start,end);
    
  	// Complete the code to print the pattern.
    return 0;
}
