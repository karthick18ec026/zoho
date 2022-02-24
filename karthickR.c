#include <stdio.h>
int main()
{
    char a[100];
    int len=0;
    scanf("%s",a);
    for(int i=0;a[i] !='\0';i++)
    {
        len++;
    }
    int mid=len/2, l=len-1, m=1;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("  ");            
        }
        for(int k=0;k<m;k++)
        {
            printf("%c ",a[(mid+k)%len]);
        }
        m++;
        l--;
        printf("\n");
    }
    return 0;
}