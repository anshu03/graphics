#include<stdio.h>
#include<graphics.h>

int main(){
	float r,xc,yc;
	scanf("%f%f%f",&r,&xc,&yc);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float p=((float)(5/4))-r;
	float x,y;
	x=0;
	y=r;
	//putpixel(x+xc,y+yc,WHITE);	
	while(x<y){
		putpixel(x+xc,y+yc,WHITE);
		putpixel(-x+xc,y+yc,WHITE);
		putpixel(x+xc,-y+yc,WHITE);		
		putpixel(-x+xc,-y+yc,WHITE);		
		putpixel(y+yc,x+xc,WHITE);
		putpixel(-y+yc,x+xc,WHITE);
		putpixel(y+yc,-x+xc,WHITE);		
		putpixel(-y+yc,-x+xc,WHITE);				
		if(p<0){
			x++;
			p=p+2*x+1;
		}
		else{
			x++;
			y--;
			p=p+2*x+1-2*y;
		}		
		delay(200);
	}
	return 0;
}
