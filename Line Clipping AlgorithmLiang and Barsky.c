#include<stdio.h>
#include<graphics.h>

int main(){
	float x1,y1,x2,y2;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	float xn,yn,xx,yx;
	scanf("%f %f %f %f",&xn,&yn,&xx,&yx);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float x,y;
	x=x2-x1;
	y=y2-y1;
	float p[5],q[5],r[5];
	p[1]=-x;
	q[1]=x1-xn;
	p[2]=x;
	q[2]=xx-x1;
	p[3]=-y;
	q[3]=y1-yn;
	p[4]=y;
	q[4]=yx-y1;
	int i;
	float u1=0,u2=1;
	line(xn,yn,xx,yn);
	line(xx,yn,xx,yx);
	line(xx,yx,xn,yx);
	line(xn,yx,xn,yn);
	for(i=1;i<=4;i++){
		if(p[i]==0){
			if(q[i]<0){
				printf("Line is Completely Outside");
				return;
			}
			else if(q[i]>=0){
				if(i<2){
					if(y1<yn){
						y1=yn;
					}
				
					if(y2>yx){
						y2=yx;
					}
					line(x1,y1,x2,y2);
				}
				if(i>1){
					if(x1<xn){
						x1=xn;
					}
					if(x2>xx){
						x2=xx;
					}
					line(x1,y1,x2,y2);
				}
			}
		}
		else{
			r[i]=q[i]/p[i];
			if(p[i]<0){
				if(u1<=r[i])
					u1=r[i];
			}
			else{
				if(u2>r[i])
					u2=r[i];
			}
		}
	}
	printf("%f %f",u1,u2);
	if(u1>u2){
		printf("Line is Completely Outside");
		return;
	}
	else if(u1==0){
		x2=x1+u2*p[2];
		y2=y1+u2*p[4];
		line(x1,y1,x2,y2);
	}
	else if(u1<u2){
		float xx1,xx2,yy1,yy2;
		xx1=x1+u1*p[2];
		xx2=x1+u2*p[2];
		yy1=y1+u1*p[4];
		yy2=y1+u2*p[4];
		printf("%f %f %f %f",xx1,xx2,yy1,yy2);
		line(xx1,yy1,xx2,yy2);
	}
	delay(5000);
	getch();
	closegraph();
	return 0;

}
