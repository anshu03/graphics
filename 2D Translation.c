#include<stdio.h>
#include<graphics.h>

int main(){
	float x0,y0,x1,y1;
	scanf("%f %f %f %f",&x0,&y0,&x1,&y1);
	float x,y;
	scanf("%f %f",&x,&y);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	line(x0,y0,x1,y1);
	line(x0+x,y0+y,x1+x,y1+y);
	getch();
	closegraph();
	return 0;

}
