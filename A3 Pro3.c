#include<stdio.h>
int main()
{
    int i,ar[5];
    for(i=0; i<5; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<5; i++)
    {
        if(ar[i]<10)
        {
            printf("%d ",ar[i]);
        }
    }
    return 0;
}
