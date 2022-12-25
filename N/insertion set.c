#include<stdio.h>
#include<conio.h>
void main ()
{
    system("cls");
    int i, j, temp=0, a[10], b[10], r[10];
    printf("Enter first set :-\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter second set :-\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++);
        {
            if(a[i]==b[j])
            {
                r[temp]=a[i];
                temp++;
                break;
            }
        }
    }
    printf("Resultant array is ");
    for(i=0;i<=temp;i++)
    {
        printf("%d ",r[i]);
    }
}
