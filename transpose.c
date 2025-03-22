#include <stdio.h>

int main() {
   int m,n;
   printf("enter number of rows");
   printf("enter number of col");
   scanf("%d %d", &m,&n);
   int arr[m][n];
   printf("\nenter the elements\n");          
   for(int i=0; i<m; i++){
       
   for(int j=0; j<n; j++){
       
   scanf("%d", &arr[i][j]);
   }
   }
   printf("\nthe elements of matrices are\n");
    for(int i=0; i<m; i++){
       
   for(int j=0; j<n; j++){
       
   printf("%d ", arr[i][j]);
   }
   printf("\n");
   }
   printf("the transpose of the matrice is\n");
        for(int i=0; i<n; i++){
       
   for(int j=0; j<m; j++){
       
   printf("%d ", arr[j][i]);
   }
   printf("\n");
   }
   
   
    return 0;
}
