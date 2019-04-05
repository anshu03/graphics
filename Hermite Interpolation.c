#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main(){
	int gd = DETECT, gm;
	float x1, y1, x2, y2;
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	float s1, s2, u, x, y;
	scanf("%f %f", &s1, &s2);
	initgraph(&gd, &gm, NULL);
	for(u=0.0; u<=1.0; u+=0.001){
		
		putpixel((int)x1, (int)y1, YELLOW);
		x = (2*u*u*u-3*u*u+1)*x1+(-2*u*u*u+3*u*u)*x2+(u*u*u-2*u*u+u)*s1+(u*u*u-u*u)*s2;
		y = (2*u*u*u-3*u*u+1)*y1+(-2*u*u*u+3*u*u)*y2+(u*u*u-2*u*u+u)*s1+(u*u*u-u*u)*s2;
		x1 = x;
		y1 = y;
	}
	delay(1000);
	putpixel(x1, y1, WHITE);
	putpixel(x2, y2, WHITE);
	getch();
	closegraph();
	return 0;
}
