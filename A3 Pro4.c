#include<stdio.h>
int main()
{
    int i,ar[5],count=0;
    for(i=0; i<5; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<5; i++)
    {
        if(ar[i]<10)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

