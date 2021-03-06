#include<stdio.h>
struct employee
{  int data;
   char name[10];
};
typedef struct employee emp;
int main(){
   emp e1;
   FILE *fpread,*fpwrite; char ch;
   fpread=fopen("empdata","rb");
   if(fpread == NULL)
    {  printf("File Error"); return;}
   fpwrite=fopen("empdataupdated","wb");
   if(fpwrite == NULL)
    { printf("File Error"); return ; }
    while( fread(&e1,1,sizeof(e1),fpread) > 0)
    {
       fwrite(&e1,1,sizeof(e1),fpwrite);
    }
  printf("------File Copied----- ");
  fclose(fpwrite);
  fclose(fpread);

}
