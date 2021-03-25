#include<stdio.h>
int main()
{
    int m,n,p,q,r,i,j;
    scanf("%d" ,&m);
    scanf("%d" ,&n);
    int line[3][n];
    for(i=0;i<3;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" ,&line[i][j]);
        }
    }
    char text[m][70];
    for(i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
        {
            text[i][j]='o';
            printf("%c" ,text[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
        {

        }
        printf("\n");
    }
    return 0;
}
