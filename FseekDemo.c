#include<stdio.h>
int main(){
   FILE *fp; char c;
   fp = fopen("abfile","r");
   if(fp == NULL)
   {
     printf("File Error");
     return;
   }
   c = fgetc(fp);
   printf("%c ",c);
   fseek(fp,0,SEEK_SET);   
   c = fgetc(fp);
   printf("%c ",c);
   fclose(fp);   
}
