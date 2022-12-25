#include<stdio.h>
void mergesort(int a[],int l,int r);
void merge(int a[],int l1,int r1,int l2,int r2);
int main() {
 int a[30],n,l;
 printf("Enter number of elements:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(l=0;l<n;l++)
   scanf("%d",&a[l]);
   mergesort(a,0,n-1);
   printf("\nSorted array is :");
   for(l=0;l<n;l++)
     printf("%d ",a[l]);
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
 int temp[50];
 int l,r,k;
 l=l1;
 r=l2;
 k=0;
 while(l<=r1 && r<=r2)
   if(a[l]<a[r])
      temp[k++]=a[l++];
   else
      temp[k++]=a[r++];

 while(l<=r1)
   temp[k++]=a[l++];
   while(r<=r2)
     temp[k++]=a[r++];

     for(l=l1,r=0;l<=r2;l++,r++)
       a[l]=temp[r];
}
