#include<stdio.h>
    main()
    {
        int i, num[10];
        for(i=0; i<10; i ++)
        {
            printf("\n Enter %d Element Of Array : ", i);
            scanf("%d", &num[i]);
        }
        for(i=0; i<10; i ++)
        {
            printf("\n %d Element Of Array:", num[i]);
        }
        getch();
    }

