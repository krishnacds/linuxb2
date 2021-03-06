#include <stdio.h>
#include <string.h>
struct employee 
{
  int data;
  char name[10];
};
void search(int  ,int *,int *);
FILE *fp;
typedef struct employee  emp;  
int main(){
    
    emp e1; int found=0,pos=0;
    fp = fopen("empdata","rb");
    if(fp == NULL){
    printf("File Error");
    return ;}
    while( fread(&e1,1,sizeof(e1),fp)  > 0) 
           
        printf("%d  %s \n",e1.data,e1.name);      
    fclose(fp);
      
}
     
   
 
