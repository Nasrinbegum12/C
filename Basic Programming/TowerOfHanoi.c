#include<stdio.h>
void toh(int plate,char src,char des,char med)
{

    if(plate==1)
    {

        printf("move %d from %c to %c\n",plate,src,des,med);
    }
    else
    {

        toh(plate-1,src,med,des);
         printf("move %d from %c to %c\n",plate,src,des,med);
         toh(plate-1,src,des,med);

    }
}
int main()
{

    int plate;
    scanf("%d",&plate);
    toh(plate,'s','d','m');
}

