#include<stdio.h>
int main(){
  FILE *fp1,*fp2; char ch;
   fp1=fopen("file1","r");
   if(fp1 == NULL)
    {  printf("File Error"); return;}
   fp2=fopen("file2","w");
   if(fp2 == NULL)
    { printf("File Error"); return ; }
   
 do
 {
    ch = fgetc(fp1);     
    if(ch==EOF){
     break; 
    }
    fputc(ch,fp2);
       
 }while(ch!=EOF);
  printf("------File Copied----- ");
  fclose(fp1);
  fclose(fp2);


}
