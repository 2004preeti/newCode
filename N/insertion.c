#include<stdio.h>
int main() {
 int a[100], n, i, j, element;
 printf("\nEnter the total Number of Elements : ");
 scanf("%d", &n);
 printf("\nEnter the Array Elements : ");
 for(i = 0; i < n; i++)
  scanf("%d", &a[i]);
  for(i = 1; i <= n - 1; i++) {
   for(j = i; j > 0 && a[j - 1] > a[j]; j--) {
     element = a[j];
     a[j] = a[j - 1];
     a[j - 1] = element;
   }
}
  printf("\n Insertion Sort Result : ");
  for(i = 0; i < n; i++) {
    printf(" %d \t", a[i]);
  }
  printf("\n");
  return 0;
}
