#include <stdio.h>

void mergesort(int a[],int l,int r);
void merge(int a[],int l1,int r1,int l2,int r2);
void QuSort(int arr[100],int start,int end);

int main()
 {
    
    int n,method,element,position;
    printf("Please enter the number of numbers in the array you want to sort:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Please enter integers for sorting with space/n");
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }

    printf("Which sorting method you want to use :\nPress 1 for insertion sort\nPress 2 for bubble sort\nPress 3 for selection sort\nPress 4 for merge sort\nPress 5 for quick sort\n");
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
   case 2:
   for(int i = 0 ; i < n - 1; i++) {
     for(int j = 0 ; j < n-i-1; j++) {
      if(arr[j] > arr[j+1]) {
         element = arr[j];
         arr[j] = arr[j+1];
         arr[j+1] = element;
       }
    }
}  
   printf("\nBubble Sort Result is ");
   for(int i = 0; i < n; i++) {
    printf(" %d", arr[i]);
    if (i!=n-1){
        printf(",");
    }
  } 
   break;
   case 3:
   for (int i = 0; i < (n- 1); i++) {
   position = i;
   for (int j = i + 1; j < n; j++) {
    if (arr[position] > arr[j])
      position = j;
   }
   if (position != i) {
     element = arr[i];
     arr[i] = arr[position];
     arr[position] = element;
   }
 }
 printf("Sorted list in ascending order is ");
 for(int i = 0; i < n; i++) {
    printf(" %d", arr[i]);
    if (i!=n-1){
        printf(",");
    }
  } break;
  case 4:
    mergesort(arr,0,n-1);
    printf("\nMerge Sort Array result is : ");
    for(int i = 0; i < n; i++) {
    printf(" %d", arr[i]);
    if (i!=n-1){
        printf(",");
    }
  }
    break;
    case 5:
    QuSort(arr,0,n-1);
    printf("\nQuick Sort Array result is : ");
    for(int i = 0; i < n; i++) {
    printf(" %d", arr[i]);
    if (i!=n-1){
        printf(",");
    }
  }
    break;
 
    
  default:
    printf("You have not chosen appropriate sorting method");
    break;
  }
    return 0;
 }
 void mergesort(int a[],int l,int r) {
 int mid;
 if(l<r) {
   mid=(l+r)/2;
   mergesort(a,l,mid); //left recursion
   mergesort(a,mid+1,r); //right recursion
   merge(a,l,mid,mid+1,r); //merging of two sorted sub-arrays
 }
}
void merge(int a[],int l1,int r1,int l2,int r2) {
 int temp[50]; //array used for merging
 int l,r,k;
 l=l1; 
 r=l2; 
 k=0;
 while(l<=r1 && r<=r2){ 
   if(a[l]<a[r])
      temp[k++]=a[l++];
   else
      temp[k++]=a[r++];
}
 while(l<=r1)
   temp[k++]=a[l++];
   while(r<=r2)
     temp[k++]=a[r++];
     for(l=l1,r=0;l<=r2;l++,r++)
       a[l]=temp[r];
       
 
}
void QuSort(int arr[100],int start,int end){
   int i, j, p, swap;
 
   if(start<end){
      p=start;
      i=start;
      j=end;
 
      while(i<j){
         while(arr[i]<=arr[p]&&i<end)
            i++;
         while(arr[j]>arr[p])
            j--;
         if(i<j){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
         }
      }
 
      swap=arr[p];
      arr[p]=arr[j];
      arr[j]=swap;
      QuSort(arr,start,j-1);
      QuSort(arr,j+1,end);
 
   }
}


