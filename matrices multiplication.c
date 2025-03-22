#include <stdio.h>

int main() {
    int m,n,p,q;
    printf("enter number of rows\n");
    scanf("%d", &m);
    printf("enter number of col\n");
    scanf("%d", &n);
     printf("enter number of rows\n");
    scanf("%d", &p);
    printf("enter number of col\n");
    scanf("%d", &q);
    int arr[m][n];
    int arr2[p][q];
    int arr3[m][q];
    if(n!=p){
        printf("matrice multiplication is not possible");
    }
    
    printf("enter the elements of 1starray\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\ndisplaying the 1starray\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //2nd array
    
    printf("enter the elements of 2nd array\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\ndisplaying the  2nd array\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
   for(int i=0;i<m; i++){
       for(int j=0; j<q; j++){
          arr3[i][j]=0;
          for(int k=0; k<n; k++){
              arr3[i][j]+=arr[i][k]*arr2[k][j];//itering in inner loop
          }
       }
   }
           printf("the multplication of matrices:\n");
               for(int i=0;i<m; i++){
       for(int j=0; j<q; j++){
           
           printf("%d ", arr3[i][j]);
           }
           printf("\n");
}
   
   
   
    return 0;
}
