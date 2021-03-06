

#include<stdio.h>
int main()
{

  FILE *fp;
  fp = fopen("Myfile","w");
  if(fp == NULL)
  { 
    printf("File Error");
    return; 
  }
  fputs("Welcome to Linux Files",fp);
  fclose(fp);

}

