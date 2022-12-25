#include<stdio.h>
int main() {
 int array[100], size, i, j, position, temp;
 printf("Enter Number of Elements : ");
 scanf("%d", &size);
 printf("Enter %d Numbers : ", size);
 for (i = 0; i < size; i++)
  scanf("%d", &array[i]);
  for (i = 0; i < (size - 1); i++) {
   position = i;
   for (j = i + 1; j < size; j++) {
    if (array[position] > array[j])
      position = j;
   }
   if (position != i) {
     temp = array[i];
     array[i] = array[position];
     array[position] = temp;
   }
 }
 printf("Sorted list in ascending order:\n");
 for (i = 0; i < size; i++)
   printf("%d\t", array[i]);
   return 0;
}
