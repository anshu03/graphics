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
	float D;
	if(dy<dx)
		D=dy-(dx/2);
	else
		D=dx-(dy/2);
	float x=x0,y=y0;
	putpixel(x,y,WHITE);
	if(dy<dx){
		while(x<x1){
			x=x+1;
			if(D<0)
				D=D+dy;
			else
				D=D+dy-dx;
			y=y+1;
			putpixel(x,y,WHITE);
			delay(100);
		}
	}
	else{
		while(y<y1){
			y=y+1;
			if(D<0)
				D=D+dx;
			else
				D=D+dx-dy;
			x=x+1;
			putpixel(x,y,WHITE);
			delay(100);
		}
	}
	return 0;
}
