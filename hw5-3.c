#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,salary;
    double money;


    scanf("%d%d",&hours,&salary);
     money=hours*salary;
    if(hours>60 && hours<=120)
         money=60*salary+(hours-60)*1.33*salary;
    if(hours>120)
    money=60*salary+60*salary*1.33+(hours-120)*salary*1.66;




    printf("%.1f\n",money);
    return 0;
}
