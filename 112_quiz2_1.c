#include<stdio.h>
int main()
{
    int n,i,count=0,cube_num,num1=2;
    scanf("%d" ,&n);
    cube_num=num1*num1*num1;
    if(n%cube_num==0)
    {
        printf("Not Cube Free");
    }
    else if(n%cube_num!=0&&n>8)
    {
        for(i=1;i<=n;i++)
        {
            if(n%cube_num!=0)
            {
                count=n-1;
            }
        }
        printf("%d" ,count);
    }
    else if(n%cube_num!=0&&n<8)
    {
        printf("%d" ,n);
    }
    return 0;
}
