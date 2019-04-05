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
	float p0;
	p0=2*dy-dx;
	float steps;
	steps=abs(dx);
	float x,y;
	x=x0;
	y=y0;
	putpixel(x,y,WHITE);
	int i;
	float xk=x0,yk=y0,pk=p0;
	for(i=0;i<=steps;i++){
		if(pk<0){
			putpixel(xk+1,y,WHITE);
			pk=pk+2*dy;
			xk++;
		}
		else{
			putpixel(xk+1,yk+1,WHITE);
			pk=pk+2*dy-2*dx;
			xk++;
			yk++;
		}
		delay(100);
	}
	return 0;
}
