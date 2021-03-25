#include<stdio.h>
int main()
{
    int m,n,p,q,r,i,j;
    scanf("%d" ,&m);
    scanf("%d" ,&n);
    int Cloth[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" ,&Cloth[i][j]);
        }
    }
    char Text[m][70];
    for(i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
        {
            Text[i][j]='o';
            printf("%c" ,Text[i][j]);
        }
        printf("\n");
    }
    /*for(p=0;p<m;p++)
    {
        for(q=0;q<70;q++)
        {

        }
    }
    */return 0;
}
