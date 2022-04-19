#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    FILE * in =stdin;
    FILE * out =stdout;
    
    char * str = (char*)malloc(sizeof(char)*1024);
    scanf("%[^\n]%*c", str);
    
    fprintf(out,"%s",str);
    printf("\n");
    scanf("%[^\n]%*c", str);
     fprintf(out,"%s",str);
    printf("\n");
     scanf("%[^\n]%*c", str);
     fprintf(out,"%s",str);
    return 0;
}
