#include<stdio.h>
#include<graphics.h>

int main(){
	float x0,y0,x1,y1;
	scanf("%f %f %f %f",&x0,&y0,&x1,&y1);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float dx,dy;
	dx=x1-x0;
	dy=y1-y0;
	float steps;
	steps=abs(dx)>abs(dy)?abs(dx):abs(dy);
	float xi,yi;
	xi=dx/((float)steps);
	yi=dy/((float)steps);
	float x,y;
	x=x0;
	y=y0;
	int i;
	for(i=0;i<=steps;i++){
		putpixel(x,y,WHITE);
		x=x+xi;
		y=y+yi;
		delay(100);
	}
	return 0;
}
