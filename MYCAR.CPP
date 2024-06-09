//car motion
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

setbkcolor(RED);
//stopwatch
for(int j=0;j<=360;j++)  //1st for
{
//button
line(295,180,295,173);
line(300,180,300,173);
rectangle(288,170,308,173);
//clock
circle(300,250,70);
pieslice(300,250,0,j,70);
outtextxy(250,330,"Loading.Please Wait!");
delay(10);  //loading speed of pieslice  (low=fast)
} //1st for

//my car
for(int i=0;i<639;i++)
  {      //2nd for

//car outline
line(30+i,430,60+i,430);
arc(80+i,430,0,180,20);
line(100+i,430,130+i,430);
arc(150+i,430,0,180,20);
line(170+i,430,200+i,430);
line(200+i,430,200+i,400);
line(200+i,400,170+i,400);
line(170+i,400,150+i,370);
line(150+i,370,70+i,370);
line(70+i,370,50+i,400);
line(50+i,400,30+i,400);
line(30+i,400,30+i,430);

//text over car's roof
outtextxy(100+i,350,"F8");

 //car wheels
circle(80+i,430,20);
circle(150+i,430,20);

//road
line(0,453,639,453);
delay(1); //speed of car
cleardevice();
}	//2nd for

getch();
closegraph();  //optional
return 0;
} //main closes