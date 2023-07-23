#include<stdio.h>
#include<graphics.h>
int main()
{
int x,y,x_mid,y_mid,r,d;
int gd=DETECT,gm;
 char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
initgraph(&gd, &gm, data); 
printf("*** MID POINT Circle drawing algorithm ****\n\n");
printf("\nenter the coordinates= ");
scanf("%d %d",&x_mid,&y_mid);
printf("\n now enter the radius =");
scanf("%d",&r);
x=0;
y=r;
d=1-r;
do
{
putpixel(x_mid+x,y_mid+y,1);
putpixel(x_mid+y,y_mid+x,1);
putpixel(x_mid-y,y_mid+x,1);
putpixel(x_mid-x,y_mid+y,1);
putpixel(x_mid-x,y_mid-y,1);
putpixel(x_mid-y,y_mid-x,1);
putpixel(x_mid+y,y_mid-x,1);
putpixel(x_mid+x,y_mid-y,1);
if(d<0)  {
d+=(2*x)+1;
}
else{
y=y-1;
d+=(2*x)-(2*y)+1;
}
x=x+1;
}while(y>x);
getch();
}