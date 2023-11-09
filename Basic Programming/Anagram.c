#include<stdio.h>
int length(char x[])
{
    int count=0;
    for(int i=0;x[i];i++)
    {
        count++;
    }
    return count;
}
void  anagram(char a[],char b[])
{
    int d[123];
    for(int i=0;i<123;i++)
    {
         d[i]=0;
    }
    for(int i=0;a[i];i++)
    {
        int m=(int)a[i];
        d[m]++;
    }
     for(int i=0;b[i];i++)
    {
        int m=(int)b[i];
        d[m]--;
    }
    int flag=0;
    for(int i=0;i<123;i++)
    {
        if(d[i]!=0)
        {
            flag++;
            break;
        }
       
    }
     if (flag==0)
            printf("anagram");
        else
            printf("not anagram");
}
void main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int n1=length(a);
    int n2=length(b);
    if(n1==n2)
        anagram(a,b);
    else
        printf("not anagram");
}
