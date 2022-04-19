#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void num2str(int);
void iseven(int);

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for(int i =a ; i<=9;i++){
    num2str(i);
    }
     for(int i =a+1 ; i<=9;i++){
    iseven(i);
    }
    
    
  	// Complete the code.

    return 0;
}
void num2str(int num){
    switch(num){
         case 0 :
         printf("zero\n");
         break;
         case 1 :
         printf("one\n");
         break;
         case 2 :
         printf("two\n");
         break;
         case 3 :
         printf("three\n");
         break;
         case 4 :
         printf("four\n");
         break;
         case 5 :
         printf("five\n");
         break;
         case 6 :
         printf("six\n");
         break;
         case 7 :
         printf("seven\n");
         break;
         case 8 :
         printf("eight\n");
         break;
         case 9 :
         printf("nine\n");
         break;
         default:
         ;
    }
}
void iseven(int num){
    if(num%2==0){
        printf("even\n");
    }
    else{
         printf("odd\n");
    }
}
