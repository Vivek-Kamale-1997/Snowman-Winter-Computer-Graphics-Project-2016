#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

for (float i=0,j=0;i<639,j<479;i++,j++)     // max=80+639=919
{
//slope
line(0,0,639,479);
//ball
circle(80+i,35+j+0.7,20);   //80,81,82....

delay(10);
cleardevice();
}



getch();
closegraph();
return 0;
}