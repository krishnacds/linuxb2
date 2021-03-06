

#include<stdio.h>
int main()
{

  FILE *fp;
  fp = fopen("fpfile","w");
  if(fp == NULL)
  { 
    printf("File Error");
    return; 
  }
  //fputs("Welcome to Linux Files",fp);
  fprintf(fp,"Written Using FPrintf ");
  fclose(fp);

}

