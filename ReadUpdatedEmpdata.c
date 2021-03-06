
#include <stdio.h>
#include <string.h>
struct employee 
{
  int data;
  char name[10];
};
FILE *fp;
typedef struct employee  emp;  
int main(){
    
    emp e1;
    fp = fopen("empdataupdated","rb");
    if(fp == NULL){
    printf("File Error");
    return ; 
    }
    fread(&e1,1,sizeof(e1),fp);
    printf("[%d   %s]\n",e1.data,e1.name);
   
    fread(&e1,1,sizeof(e1),fp);
    printf("[%d   %s]\n",e1.data,e1.name);
    
    fread(&e1,1,sizeof(e1),fp);
    printf("[%d   %s]\n",e1.data,e1.name);

    fclose(fp);

} 
