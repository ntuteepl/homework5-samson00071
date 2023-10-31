#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    double money,discount;
    discount=1;
    printf("請輸入通話分鐘數\n");
    scanf("%d",&min);
    if(money>800 && money<=1500)
        discount=0.9;
    if(money>1500)
        discount=0.79;


    money=min*0.9*discount;

    printf("通話費%.1f\n",money);
    return 0;
}

