#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    double money,discount;
    discount=1;

    scanf("%d",&min);
    if(min>800 && min<1500){
        discount=0.9;}
     else  if(min>=1500){
        discount=0.79;}


    money=min*0.9*discount;

    printf("%.1f\n",money);
    return 0;
}
