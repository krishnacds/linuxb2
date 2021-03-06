

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
  fgets(buf,100,fp);
  printf("%s",buf);
  fclose(fp);

}

