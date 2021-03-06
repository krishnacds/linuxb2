#include<stdio.h>
int main(){
   FILE *fp; char c;int i; int count=0;
   fp = fopen("abfile","r");
   if(fp == NULL)
   {
     printf("File Error");
     return;
   }
 
  for(i=1;i<7;i++)
   {   
   count++;
   fseek(fp,-(i),SEEK_END);   
   c = fgetc(fp);
   printf("%c ",c);
   }
   printf("\nCount is %d",count);
   fclose(fp);   
}
