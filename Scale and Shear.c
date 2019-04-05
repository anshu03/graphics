#include<stdio.h>
#include<graphics.h>

int main(){
	float x[5],y[5];
	int i;
	for(i=0;i<4;i++){
		scanf("%f %f",&x[i],&y[i]);
	}
	x[4]=x[0];
	y[4]=y[0];
	float x1,y1;
	scanf("%f %f",&x1,&y1);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	for(i=0;i<4;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
	}
/*	for(i=0;i<4;i++){
		line(x[i]*x1,y[i]*y1,x[i+1]*x1,y[i+1]*y1);
	}*/
	for(i=0;i<4;i++){
		line(x[i]+x1*y[i],y[i],x[i+1]+x1*y[i+1],y[i+1]);
	}
	for(i=0;i<4;i++){
		line(x[i],y[i]+y1*x[i],x[i+1],y[i+1]+y1*x[i+1]);
	}	
	getch();
	closegraph();
	return 0;
}
