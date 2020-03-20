#include <stdio.h>

int main() {
 int n, i, j;
 printf("Enter the number of rows or columns: ");
 scanf("%d",&n);
 int a[n][n];
 int val = 1;
// Assign value to array a
 for (i = 0 ; i < n; i++){
     int val_array = val;
     for (j = 0; j < n; j++){
         a[i][j] = val_array;
         val_array += 1;
     }
     val += 1;
 }

 // Print all values in array a
 for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++){
        printf("%2d ", a[i][j]);
    }
    printf("\n");
}
 return 0;
}