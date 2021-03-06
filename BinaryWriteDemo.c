#include <stdio.h>
#include <string.h>
struct node{
int data;
char name[20];

};

int main(){
struct node n1 ;
FILE *fp;
n1.data=222;
fp = fopen("binfile","wb");
  if(fp==NULL){ printf("FILE ERROR"); return;}

strcpy(n1.name,"Kiran");
fwrite(&n1,1,sizeof(n1),fp);
fclose(fp);

}

