
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
    
    emp e1,e2,e3;
    fp = fopen("empdata","wb");
    if(fp == NULL){
    printf("File Error");
    return ; 
    }
    e1.data=10;
    e2.data=20;
    e3.data=30;
    strcpy(e1.name,"Kiran");
    strcpy(e2.name,"Ravi");
    strcpy(e3.name,"Pavan");
    fwrite(&e1,1,sizeof(e1),fp);
    fwrite(&e2,1,sizeof(e2),fp);
    fwrite(&e3,1,sizeof(e3),fp);
    fclose(fp);

} 
