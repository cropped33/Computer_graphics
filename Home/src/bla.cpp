#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int main()
{
    int x1,y1,x2,y2,lx,ly,dx,dy,pk,i;
    int gd=DETECT,gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd, &gm, data); 
    printf("put the values of x1 and y1\n");
    scanf("%d %d",&x1,&y1);
    printf("put the values of x2 and y2\n");
    scanf("%d %d",&x2,&y2);
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    if(x2>x1)
        lx=1;
    else 
        lx=-1;
    if(y2>y1)
        ly=1;
    else
        ly=-1;
    putpixel(x1,y1,RED);
    if(dx>dy){
        pk=2*dy-dx;
        for(i=0;i<dx;i++){
            if(pk<0){
                x1=x1+lx;
                y1=y1;
                pk=pk+2*dy;
            }
            else
            {
                x1=x1+lx;
                y1=y1+ly;
                pk=pk+2*dy-2*dx;

            }
                putpixel(x1,y1,RED);

        }
    }
    else{
        pk=2*dx-dy;
        for(i=0;i<dy;i++){
            if(pk<0){
                x1=x1;
                y1=y1+ly;
                pk=pk+2*dx;

            }
            else{
                x1=x1+lx;
                y1=y1+ly;
                pk=pk+2*dx-2*dy;

            }
            putpixel(x1,y1,RED);

        }
    }


    getch();



return 0;
}