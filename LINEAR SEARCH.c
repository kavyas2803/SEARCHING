#include<stdio.h>
int main()
{
    int n,arr[100],i,x,f=0;
    printf("\n Enter the num of elements");
    scanf("%d",&n);
    printf("\n Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the element to be  searched");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("\n element found at position %d",i);
            f=1;
            break;
        }
    }
   if(f==0)
   {
       printf("\n element not found");
   }
}
