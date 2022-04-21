
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


//my function to print the array every time after every Sorting Operation
void showmyarr(char** arr , int n ){
    for (int i = 0 ;i<n;i++)
    printf("%s ",arr[i]);
printf("\n");
}
//my LexicoGraphic function sort - i use insertion sort in every sort process
void abcsort(char **arr,int n){
 char *tmp = (char*) malloc(100*sizeof(char));
for(int i = 1 ; i<n;i++ ){
     strcpy(tmp,arr[i]);
     int j=i;
    while(j>0 && arr[j-1][0]>tmp[0]){
        strcpy(arr[j],arr[j-1]);
        j--;
    }
    strcpy(arr[j],tmp);
}
 

}
/*
here instead of sorting again with lexicographic sort  from Bigger to Lower, i just reverse in place my lexographic sorted array of strings 
from lower to bigger
*/
void revabcsort(char **arr,int n){
    char *  mytmp= malloc(100 * sizeof(char));
    for(int i = 0,j=n-1 ; i<n/2 ; i++,j--){
        strcpy(mytmp,arr[i]);
        strcpy(arr[i],arr[j]);
        strcpy(arr[j],mytmp);
    }

}
// here is my function to  length sort - i use insertion sort methodolgy here 

void length_sort(char**arr,int n){

    char *  tmp= malloc(100 * sizeof(char));
    for(int i = 1 ; i<n;i++ ){
        int j = i;
        strcpy(tmp,arr[j]);
        while(j>0 && strlen(arr[j-1])>strlen(tmp) ){
            strcpy(arr[j],arr[j-1]);
            j--;
        }
    strcpy(arr[j],tmp);
    }
}

/*
here i search by useing linear search method , and compare every char if it ASCII decimal of char belongs to range from 
0 to 47 and 58 to 64 and 91 to 96 and 123 to 127 
and this ranges Contian Special Chars in Decimal
if it found any special char the counter will increase one by one every time founding special char and after finishing return counter
to compare and use  it in special_char_sort function
*/

int special_char_counter(char*arr){
    int counter=0;
    for(int i =0 ; i< strlen(arr) ; i++){
        if(arr[i] != '\0' && ( arr[i]<=47 || (arr[i]>=58 && arr[i]<=64) || (arr[i]>=91 && arr[i]<=96) || (arr[i]>=123 && arr[i]<=127)  )){
            counter++;
            continue;
        }
    }
    return counter;
}
//this is my fucntion to sort string by special chars using insertion sort methodolgy

void special_char_sort(char **arr,int n){
    int j = 0 ;
    char * tmp = (char*)malloc(100*sizeof(char));
for(int i =1; i<n ; i++){
   j=i;
   strcpy(tmp,arr[j]);
   while(j>0 && (special_char_counter(arr[j-1])>special_char_counter(arr[j]))){
            strcpy(arr[j],arr[j-1]);
            j--;
        }
    strcpy(arr[j],tmp);
    }
   }



int main(void){
// n is number of Strings will be Scanned 
int n ;
printf("enter number of Strings : ");
scanf("%d",&n);
//here i allocote space for the Strings will be Scanned in  heap memory and i allocate also for every string 100 * size of char.. mean 100 byte
  
  char **  arrofstr =(char**)malloc(n * sizeof(char*)) ;
for ( int i = 0 ; i<n ; i++)
    arrofstr[i]=(char*)malloc(100*sizeof(char));
  
  //here scanning Strings Starting
for ( int i = 0 ; i<n ; i++){
    printf("\nenter the %d String : ",i+1);
    scanf("%s",arrofstr[i]);
}

printf("\n[+] Starting [+] \n");

abcsort(arrofstr,n);
printf("\nlexicographic-sort :\n\n");
showmyarr(arrofstr,n);

printf("\nrevesre-lexicographic-sort :\n\n");
revabcsort(arrofstr,n);
showmyarr(arrofstr,n);


abcsort(arrofstr,n);
length_sort(arrofstr, n);
printf("\nlength-sort by lexicographic-sort :\n\n");
showmyarr(arrofstr,n);
printf("\nspecial_chars_sort-sort :\n\n");
special_char_sort(arrofstr, n);
revabcsort(arrofstr,n);
showmyarr(arrofstr, n);


    return EXIT_SUCCESS;
}
