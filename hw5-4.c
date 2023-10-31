#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    double angle;

    printf("輸入 時、分\n");
    scanf("%d%d",&h,&m);
    angle=(h*30+0.2*m)-m*6;
   if(1>h || h>12 )
    goto exit;
     if(59<m || m<0 )
     goto exit;

    if(angle<0 )
         angle=-angle;
    if(angle>180)
        angle=360-angle;

    printf("角度%.1f\n",angle);
    return 0;
    exit:
      printf("輸入錯誤\n");
}

