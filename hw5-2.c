#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    double money,discount;
    discount=1;
   
    scanf("%d",&min);
    if(money>800 && money<=1500)
        discount=0.9;
    if(money>1500)
        discount=0.79;


    money=min*0.9*discount;

    printf("%.1f\n",money);
    return 0;
}
