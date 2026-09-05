#include <stdio.h>
 int main(){
    FILE *fptr;
    /*fptr =fopen("filename.txt","w");
    fprintf(fptr,"some text");
    fclose(fptr);*/
    fptr=fopen("filename.txt","r");
    char stringy[100000];
    fgets(stringy,100000,fptr);
    fclose(fptr);
    printf(stringy);
   
    



    return 0;
 }