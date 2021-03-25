#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d" ,&n);
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            count++;
        }
    }
    printf("%d" ,count);
    return 0;
}
