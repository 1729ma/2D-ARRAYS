#include <stdio.h>
#define n 2
int main() {
    int roll[n],totalmarks;
   int marks[n][3];
   for(int i=0; i<n;i++){
       printf("\nenter the roll of %dth student\n", i+1);
       scanf("%d",&roll[i]);
      for(int j=0; j<3; j++){
          printf("\nenter the marks of subject no %d of student %d\n  ", j+1,i+1 );
          scanf("%d", &marks[i][j]);
      }
   }


for(int i=0; i<n;i++){
      for(int j=0; j<3; j++){
          printf("\nthe marks of %dth student of roll no %d of subject %d\n is %d out of 100", i+1, roll[i],j+1,marks[i][j]);
        
      }
      
   }
   for(int i=0; i<n; i++){
       totalmarks=0;
       for(int j=0; j<3; j++){
           totalmarks=totalmarks+marks[i][j];
            
       }
       printf("\nthe total marks of %d student is %d\n", i+1,totalmarks);
   }
      
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}
