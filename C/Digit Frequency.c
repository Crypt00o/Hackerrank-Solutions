#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char * str =(char*) malloc(4096*sizeof(char));
fgets(str,1024,stdin);
realloc(str,(strlen(str)+1));
int * arr = (int *) malloc(1000*sizeof(int));
int j =0 ,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
for(int i=0 ; i<(strlen(str));i++){
if(str[i]-'0'<10 && str[i]-'0'>=0 )
{
*(arr+j)=str[i]-'0';
j++;
}
*(arr+j)=404;
}

for(int i=0 ; i<4096;i++){
    if (arr[i]==404)
    break;
    switch (arr[i]){
        case 1 : 
        one++;
        break;
        case 2 :
        two++;
        break;
        case 3 :
        three++;
        break;
        case 4 :
        four++;
        break;
        case 5 :
        five++;
        break;
        case 6 :
        six++;
        break;
        case 7 :
        seven++;
        break;
        case 8 :
        eight++;
        break;
        case 9 :
        nine++;
        break;
        case 0 :
        zero++;
        break;
    
    }
    }
printf("%d %d %d %d %d %d %d %d %d %d ",zero,one,two,three,four,five,six,seven,eight,nine);
    
    
    return 0;
}
