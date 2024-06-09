//basketball
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");


for (int i=0,j=0;i<270,j<100;i++,j++)
{
//man
circle(50,300,10);
line(50,310,50,360);
line(50,360,35,380);
line(50,360,65,380);
line(50,320,65,340);
line(65,340,75,310);

//ball
circle(85+i,303-j,9);

//basket rod
line(510,380,510,290);//vertical
line(510,290,480,290);
line(510,300,480,300);
arc(460,290,180,360,20);

//text
outtextxy(270,100,"Basketball");

//road
line(0,380,639,380);
setbkcolor(RED);
delay(10);
cleardevice();
}

getch();
closegraph();  //optional
return 0;
} //main closes