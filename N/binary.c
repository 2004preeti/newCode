#include <stdio.h>
int BinarySearch(int array[], int first_index, int last_index, int element){
 while (first_index <= last_index){
  int centre = first_index + (last_index - first_index )/2;
  if (array[centre] == element)
     return centre;
    if (array[centre] < element)
      first_index = centre + 1;
    else
      last_index = centre - 1;
 }
 return -1;
}
int main(void){
  int array[] = {2,5,8,12,16,23,38,56,72,91,97};
  int n = 11;
  int element = 38;
  int found_index = BinarySearch(array, 0, n-1, element);
  if(found_index == -1 ) {
    printf("Element not found in the array ");
  }
  else {
   printf("Element found at index : %d",found_index);
  }
  return 0;
}
