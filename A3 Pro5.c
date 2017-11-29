#include<stdio.h>
int main()
{
    int i,ar[6],search;
    for(i=0; i<6; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&search);
    for(i=0; i<6; i++)
    {
        if(search==ar[i])
        {
            printf("%d was found",search);
            break;
        }
        else
        {
            printf("%d was not found",search);
            break;
        }
    }
    return 0;
}


