#include <stdio.h>
#include <graphics.h>

void DrawCircle(float x, float y, float p, float q){
	putpixel(x+p, y+q, WHITE);
	putpixel(x+p, y-q, WHITE);
	putpixel(x-p, y+q, WHITE);
	putpixel(x-p, y-q, WHITE);
	putpixel(x+q, y+p, WHITE);
	putpixel(x+q, y-p, WHITE);
	putpixel(x-q, y+p, WHITE);
	putpixel(x-q, y-p, WHITE);
}

int main(){
	float x, y, r;

	// Input
	printf("Enter radius: ");
	scanf("%f", &r);
	printf("Enter coordinates of center: ");
	scanf("%f %f", &x, &y);
	
	float p=0, q=r;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	
	float d;
	d = 3 - 2*r;
	while(p<=q){
		DrawCircle(x, y, p, q);
		p++;
		if(d<0)	d = d + 4*p + 6;
		else{
			r--;
			d = d + 4*(p-q) + 10;
			q--;
		}
		delay(100);
	}
	closegraph();
	
