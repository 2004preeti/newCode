#include<stdio.h>
#include<conio.h>
void main(){
  int list[20],size,i,sElement;
  printf("Enter the required list size: ");
  scanf("%d",&size);
  printf("Enter any %d numbers: ",size);
  for(i = 0; i < size; i++)
    scanf("%d",&list[i]);
    printf("Enter the element you want to Search: ");
    scanf("%d",&sElement);
    // Linear Search Logic
    for(i = 0; i < size; i++) {
      if(sElement == list[i]) {
        printf("Searched Element is found at %d index", i);
        break;
      }
   }
   if(i == size)
     printf("Searched element is not found in the list!!!");
     getch();
}
