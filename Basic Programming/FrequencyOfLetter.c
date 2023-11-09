#include<stdio.h>
int main()
{
    char x[100];
    scanf("%s",x);
    int b[123];
    for(int i=0;i<123;i++)
        b[i]=0;
    for(int i=0;x[i];i++)
    {
        int m=(int)x[i];
        b[m]++;
    }
    for(int i=123;i>0;i--)
    {
        if(b[i]>0)
            printf("%c - %d \n",i,b[i]);
           
    }
}
