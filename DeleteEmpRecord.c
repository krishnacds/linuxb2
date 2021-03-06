#include <stdio.h>
#include <string.h>
struct employee 
{
  int data;
  char name[10];
};
void search(int  ,int *,int *);
FILE *fp=NULL,*fp1=NULL;
typedef struct employee  emp;  
int main(){
    emp e; int found=0,pos=0;
    printf("Enter emp id and new name to update");
    scanf("%d",&e.data);
    scanf("%s",e.name);
    search(e.data,&found,&pos); // Program ends here if record not found 
    fp = fopen("empdata","r+");
    if(fp == NULL){
    printf("File Error");
    return ; 
    }
    fseek(fp, sizeof(e) * (pos-1),SEEK_SET);
    fwrite(&e,1,sizeof(e),fp);
    fclose(fp);

}
   void search(int data1,int *found,int *pos){
      int count=0,flag=0;
      emp e1;
      fp1 = fopen("empdata","rb");
      while( fread(&e1,1,sizeof(e1),fp1) > 0)  
       {
            count++;
            if(e1.data == data1)
            {
               flag=1;
               break;
            }
       }            
            if(flag == 0)
            {  
               printf("NOT FOUND");
               fclose(fp1);
               exit(1);
            }
        
           else
              {
                *pos = count ;
                *found = 1;
              } 
       fclose(fp1);       
 }
     
   
 
