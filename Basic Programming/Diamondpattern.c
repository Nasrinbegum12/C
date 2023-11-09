#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    char str[num];
    for(int itr=0;itr<=num;itr++)
        str[itr]='*';
    for(int itr=1;itr<num;itr++)
       {
        printf("%*.*s",num,itr-1,str);
        printf("%-*.*s\n",num,itr,str);
       }
     for(int itr=num;itr>=1;itr--)
       {
        printf("%*.*s",num,itr-1,str);
        printf("%-*.*s\n",num,itr,str);
       }
}
