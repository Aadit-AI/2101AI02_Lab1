#include <stdio.h>
int main()
 {
    int n,method,element;
    printf("Please enter the number of numbers in the array you want to sort:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Please enter integers for sorting with space/n");
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }

     printf("Which sorting method you want to use :\nPress 1 for insertion sort\n");
    scanf("%d",&method);
    switch(method){
    case 1:
    for(int i = 1; i <= n - 1; i++) {
    for(int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
     element = arr[j];
     arr[j] = arr[j - 1];
     arr[j - 1] = element;
   }
} 
   printf("\nInsertion Sort Result is ");
   for(int i = 0; i < n; i++) {
    printf(" %d", arr[i]);
    if (i!=n-1){
        printf(",");
    }
  } 
  break;
   
}
}
