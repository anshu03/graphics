#include<stdio.h>
#include<graphics.h>
void b_fill(int x,int y,int f,int b)
{
  int c;
  c=getpixel(x,y);
  if((c!=b)&&(c!=f))
  {
      putpixel(x,y,f);
      delay(10);
      b_fill(x+1,y,f,b);
      b_fill(x,y+1,f,b);
     // b_fill(x+1,y+1,f,b);
     // b_fill(x-1,y-1,f,b);
      b_fill(x-1,y,f,b);
      b_fill(x,y-1,f,b);
      //b_fill(x-1,y+1,f,b);
      //b_fill(x+1,y-1,f,b);
  }
}
//void b_fill(int,int,int,int);
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  int points[]={150,150,200,150,175,200,150,150};
  drawpoly(4,points);
  rectangle(50,50,100,100);
 b_fill(175,155,4,15);
  b_fill(55,55,4,15);
  delay(1000);
  closegraph();
}
