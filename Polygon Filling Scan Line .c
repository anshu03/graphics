#include <graphics.h>
#include <stdio.h>
void flood_fill4(int x,int y,int newColor,int oldColor)
{
int c;
c=getpixel(x,y);
if(c==oldColor)
{
setcolor(newColor);
putpixel (x,y,newColor);
delay(10);
flood_fill4(x+1,y,newColor,oldColor);
flood_fill4(x,y+1,newColor,oldColor);
flood_fill4(x-1,y,newColor,oldColor);
flood_fill4(x,y-1,newColor,oldColor);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\bgi");
int points[]={320,150,420,300,250,300,320,150};
drawpoly(4,points);
rectangle(50,50,100,100);
flood_fill4(51,51,4,0); // 4(red) - newColor  0(black) - oldColor
          // x y point should be one greater than rectangle border
flood_fill4(251,299,4,0);
delay(1000);
closegraph();
} 
