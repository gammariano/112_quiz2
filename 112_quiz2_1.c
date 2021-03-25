#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0,cube_num,num1=2;
    scanf("%d" ,&n);

    cube_num=pow(num1,3);
    if(n%cube_num==0)
    {
        printf("Not Cube Free");
    }
    else
    {
        printf("%d" ,n);
    }
    return 0;
}
