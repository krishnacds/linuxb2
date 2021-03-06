

#include<stdio.h>
int main()
{

  FILE *fp;  char buf[100];
  fp = fopen("Myfile","r");
  if(fp == NULL)
  { 
    printf("File Error");
    return; 
  }
  //gets(buf,100,fp);
  fscanf(fp,"%s",buf);
  printf("%s",buf);
  fscanf(fp,"%s",buf);
  printf("%s",buf);

  fscanf(fp,"%s",buf);
   
  printf("%s",buf);
  fclose(fp);

}

