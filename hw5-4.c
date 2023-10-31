#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    double angle;


    scanf("%d%d",&h,&m);
    angle=(h*30+0.5*m)-m*6;
   if(1>h || h>12 )
    goto exit;
     if(59<m || m<0 )
     goto exit;

    if(angle<0 )
         angle=-angle;
    if(angle>180)
        angle=360-angle;

    printf("%.3f\n",angle);
    return 0;
    exit:
 return 0;
}
