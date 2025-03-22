#include <stdio.h>

int main() {
    int m,n;
    printf("enter number of rows\n");
    scanf("%d", &m);
    printf("enter number of col\n");
    scanf("%d", &n);
    int arr[m][n];
    int arr2[m][n];
    int arr3[m][n];
    
    
    printf("enter the elements of array\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\ndisplaying the array\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //2nd array
    
    printf("enter the elements of 2nd array\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\ndisplaying the  2nd array\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    //sum of array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    printf("\nthe sum of matrices is\n");
for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr3[i][j]);
            
        }
        printf("\n");
}
    return 0;
}
