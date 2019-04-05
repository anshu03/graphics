#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main(){
	double x[4],y[4];
	int i;
	for(i=0;i<3;i++){
		scanf("%lf %lf",&x[i],&y[i]);
		x[i];
		y[i];
	}
	x[3]=x[0];
	y[3]=y[0];
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	for(i=0;i<3;i++){
		line(x[i]+100,y[i]+100,x[i+1]+100,y[i+1]+100);
	}
	for(i=0;i<4;i++){
		x[i]=-x[i];
		y[i]=y[i];
	}
	for(i=0;i<3;i++){
		line(x[i]+100,y[i]+100,x[i+1]+100,y[i+1]+100);
	}
	for(i=0;i<4;i++){
		x[i]=-x[i];
		y[i]=-y[i];
	}
	for(i=0;i<3;i++){
		line(x[i]+100,y[i]+100,x[i+1]+100,y[i+1]+100);
	}
	for(i=0;i<4;i++){
		double temp;
		temp=x[i];
		x[i]=-y[i];
		y[i]=temp;
	}
	for(i=0;i<3;i++){
		line(x[i]+100,y[i]+100,x[i+1]+100,y[i+1]+100);
	}	
	getch();
	closegraph();
	return 0;
}
