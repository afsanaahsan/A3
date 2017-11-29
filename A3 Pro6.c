#include<stdio.h>
int main()
{
    int i,ar[6],search,location,flag=0;
    for(i=0; i<6; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&search);
    for(i=0; i<6; i++)
    {
        if(search==ar[i]){
            flag++;
            location=i+1;
            break;
        }
    }
    if(flag==1){
        printf("%d was found at location %d",search,location);
    }
    else{
        printf("%d was not found",search);
    }
    return 0;
}



