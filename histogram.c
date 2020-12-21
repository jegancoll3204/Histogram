#include<stdio.h>
int main()
{
    int i,n;
    
    for(i=0;i<5;i++)
    {
        printf("Enter Number:");
        scanf("%d",&n);
        
        for(i=0;i<n;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}