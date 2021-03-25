#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d" ,&n);
    int palindrome[]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};
    for(i=1;i<=n;i++)
    {
        if(i==palindrome[i-1])
        {
            count++;
        }
    }
    printf("%d" ,count);
    return 0;
}
