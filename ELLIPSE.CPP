//draw ellipse
#include<graphics.h>
#include<conio.h>

int main()
 {
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
//ellipse
setcolor(RED);
ellipse(100,100,0,360,40,70);  //ellipse with border red
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(100,100,RED);  //fill yellow color from(100,100) to RED outline

getch();
closegraph();
return 0;
}

 