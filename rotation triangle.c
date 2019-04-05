#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main(){
	double x[4],y[4];
	int i;
	for(i=0;i<3;i++){
		scanf("%lf %lf",&x[i],&y[i]);
	}
	x[3]=x[0];
	y[3]=y[0];
	double x1,y1,ang;
	scanf("%lf %lf %lf",&x1,&y1,&ang);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	for(i=0;i<3;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
	}
	ang=ang*(M_PI)/((double)180.0);
	ang=(double)ang;
	for(i=0;i<4;i++){
		x[i]=x[i]-x1;
		y[i]=y[i]-y1;
		x[i]=x[i]*cos(ang)-y[i]*sin(ang);
		y[i]=x[i]*sin(ang)+y[i]*cos(ang);
		x[i]=x[i]+x1;
		y[i]=y[i]+y1;
	}
	for(i=0;i<3;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
	}	
	getch();
	closegraph();
	return 0;
}
