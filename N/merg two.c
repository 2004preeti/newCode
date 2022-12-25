#include <stdio.h>
#include <stdlib.h>

int main() {
  // array1
  int array1[] = {1,4,6,8,9};
  //array2
  int array2[] = {2,3,5,7,10};

  int len = sizeof(array1) / sizeof(array1[0]) + sizeof(array2) / sizeof(array2[0]);
  int array3[len];


  for (int i = 0, j = 0, k = 0; k < len;) {
    if (array1[i] < array2[j])
      array3[k++] = array1[i++];
    else
      array3[k++] = array2[j++];
  }
  printf("The sorted Array in ascending order : ");
  for (int k = 0; k < len; k++) {
    printf("%d ", array3[k]);
  }


  return 0;
}
