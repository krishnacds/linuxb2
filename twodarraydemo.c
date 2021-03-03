#include <stdio.h> 

int main () 

{ 

  int **arc; // int **arc OR  int arc[][]    

  int nrow=3; 

  int ncol=2;    

  arc = (int *)malloc(sizeof(int)*nrow); 
   

  for (int i = 0; i < nrow; i++) { 

      arc[i]=(int *)malloc(sizeof(int)*ncol); 

  } 
   

  // fill some data in 2 D array    

for (int i = 0; i < nrow; i++) { 

     for (int j = 0; j < ncol ; j++) { 

       arc[i][j]=(i+j+2); 

     } 

} 

printf("\n-----Combined ------\n"); 

for (int i = 0; i < nrow; i++) { 

     for (int j = 0; j < ncol ; j++) { 

        printf("%d \t ",arc[i][j]); 

     } 

     printf("\n"); 

} 

  return 0; 

} 
