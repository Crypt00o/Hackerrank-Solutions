#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char * str = (char*)malloc(sizeof(char)*1024);
   
    FILE* sin =stdin;
    FILE* sout=stdout;
    
     fprintf(sout,"Hello, World!\n");
    fgets(str,1024,sin);
    realloc(str,(strlen(str)+1));
    fprintf(sout,"%s",str);
    free(str);
    return EXIT_SUCCESS;
}
