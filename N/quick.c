#includestdio.h>
#include<stdbool.h>
#define MAX 8
int intArray[MAX] = {53, 38, 64, 15, 18, 9, 7, 26};
void printline(int count) {
 int i;
 for(i = 0;i <count-1;i++) {
  printf("-");
 }
  printf("-\n");
}
void display() {
 int i;
 printf("[");
 for(i = 0;i<MAX;i++) {
  printf("%d ",intArray[i]);
 }
 printf("]\n");
}
void swap(int n1, int n2) {
 int temp = intArray[n1];
 intArray[n1] = intArray[n2];
 intArray[n2] = temp;
}
int partition(int left, int right, int pivot) {
 int leftPointer = left -1;
 int rightPointer = right;
 while(true) {
  while(intArray[++leftPointer] < pivot) {
  //do nothing
  }
  while(rightPointer > 0 && intArray[--rightPointer] > pivot) {
   //do nothing
  }
  if(leftPointer >= rightPointer) {
    break;
  }
  else {
   printf(" item swapped :%d,%d\n", intArray[leftPointer],intArray[rightPointer]);
    swap(leftPointer,rightPointer);
  }
}
 printf(" pivot swapped :%d,%d\n", intArray[leftPointer],intArray[right]);
 swap(leftPointer,right);
 printf("Updated Array: ");
 display();
 return leftPointer;
}
 void quickSort(int left, int right) {
  if(right-left <= 0) {
    return;
  }
  else {
   int pivot = intArray[right];
   int partitionPoint = partition(left, right, pivot);
   quickSort(left,partitionPoint-1);
   quickSort(partitionPoint+1,right);
  }
  }
main() {
 printf("Input Array: ");
 display();
 printline(50);
 quickSort(0,MAX-1);
 printf("Output Array: ");
 display();
 printline(50);
}
