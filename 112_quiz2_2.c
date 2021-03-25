#include<stdio.h>
int main()
{
    int m,n,p,q,r,i,j;
    scanf("%d" ,&m);
    scanf("%d" ,&n);
    int O[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" ,&O[i][j]);
        }
    }
    return 0;
}
