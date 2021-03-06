#include<stdio.h>
struct employee
{  int data;
   char name[10];
};
void search(int,int *,int *); 
FILE *fp1;
int found=0,position=0; int counter=0,data=0;
typedef struct employee emp;
int main(){ 
   
   emp e1;
   FILE *fpread,*fpwrite; char ch;
   printf("Enter id to Delete ");
   scanf("%d",&data);
   search(data,&found,&position);
   fpwrite=fopen("empdataupdated","wb");
   fpread=fopen("empdata","rb");
   if(fpread == NULL)
    { printf("File Error"); return;}
   if(fpwrite == NULL)
    { printf("File Error"); return ; }
    
  while( fread(&e1,1,sizeof(e1),fpread) > 0)
    { 
       counter++;
       if(counter == position ) 
       continue;         
       printf("%d",counter);    
       fwrite(&e1,1,sizeof(e1),fpwrite);
    }
  printf("------File Copied----- ");
  fclose(fpwrite);
  fclose(fpread);

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
     
   
 
