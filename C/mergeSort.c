#include <stdio.h>

#define max 10

int arr1[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int arr2[10];

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(arr1[l1] <= arr1[l2])
         arr2[i] = arr1[l1++];
      else
         arr2[i] = arr1[l2++];
   }
   
   while(l1 <= mid)    
      arr2[i++] = arr1[l1++];

   while(l2 <= high)   
      arr2[i++] = arr1[l2++];

   for(i = low; i <= high; i++)
      arr1[i] = arr2[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

int main() { 
   int i;

   printf("List arr2efore sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", arr1[i]);

   sort(0, max);

   printf("\nList arr1fter sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", arr1[i]);
}