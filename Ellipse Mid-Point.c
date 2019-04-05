#include<stdio.h>
#include<graphics.h>

int main(){
	float rx,ry,xc,yc;
	scanf("%f %f %f %f",&rx,&ry,&xc,&yc);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float x,y,p0;
	x=0;
	y=ry;
	int i;
	p0=ry*ry+(0.25)*rx*rx-(rx*rx*ry);
	//while(2*ry*ry*x>=2*rx*rx*y){
		while(ry*ry*x<=rx*rx*y){
			if(p0<0){
				x++;
				p0=p0+2*ry*ry*x+ry*ry;
			}
			else{
				x++;
				y--;
				p0=p0+2*ry*ry*x-2*rx*rx*y+ry*ry;
			}
			int xs[]={x,x,-x,-x};
			int ys[]={y,-y,y,-y};
			for(i=0;i<4;i++){
				putpixel(xs[i]+xc,ys[i]+yc,WHITE);
				delay(50);
			}
		}
		float p2;
		p2=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
		while(y>=0){
			if(p2>0){
				y--;
				p2=p2-2*rx*rx*y+rx*rx;
			}
			else{
				x++;
				y--;
				p2=p2+2*ry*ry*x-2*rx*rx*y+rx*rx;
			}
			int xs[]={x,x,-x,-x};
			int ys[]={y,-y,y,-y};
			for(i=0;i<4;i++){
				putpixel(xs[i]+xc,ys[i]+yc,WHITE);
				delay(50);
			}
		}
	//}
	return 0;
}
