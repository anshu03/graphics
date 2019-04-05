#include<stdio.h>
#include<graphics.h>

int main(){
	float xn,yn,xx,yx;
	scanf("%f %f %f %f",&xn,&yn,&xx,&yx);
	int i,n;
	scanf("%d",&n);
	float a[n][2],b[2*n][2],c[2*n][2],d[2*n][2],e[2*n][2];
	for(i=0;i<n;i++){
		scanf("%f %f",&a[i][0],&a[i][1]);
		b[i][0]=-1;
		c[i][0]=-1;
		d[i][0]=-1;
		e[i][0]=-1;
	}
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	line(xn,yn,xx,yn);
	line(xx,yn,xx,yx);
	line(xx,yx,xn,yx);
	line(xn,yx,xn,yn);
	int j=0;
	for(i=0;i<n;i++){
		if(a[i%n][0]<xn){
			if(a[(i+1)%n][0]<xn){
				;
			}
			else{
				b[j][0]=xn;
				b[j][1]=((a[(i+1)%n][1]-a[i][1])/(a[(i+1)%n][0]-a[i][0]))*(xn-a[i][0])+a[i][1];
				j++;
				b[j][0]=a[(i+1)%n][0];
				b[j][1]=a[(i+1)%n][1];
				j++;
			}
		}
		else{
			if(a[(i+1)%n][0]<xn){
				b[j][0]=xn;
				b[j][1]=((a[(i+1)%n][1]-a[i][1])/(a[(i+1)%n][0]-a[i][0]))*(xn-a[i][0])+a[i][1];
				j++;
			}
			else{
				b[j][0]=a[(i+1)%n][0];
				b[j][1]=a[(i+1)%n][1];
				j++;
			}
		}	
	}
	int k=0;
	for(i=0;i<j;i++){
		if(b[i%j][1]<yn){
			if(b[(i+1)%j][1]<yn){
				;
			}
			else{
				c[k][1]=yn;
				c[k][0]=b[i][0]+(yn-b[i][1])/((b[(i+1)%j][1]-b[i][1])/(b[(i+1)%j][0]-b[i][0]));
				k++;
				c[k][0]=b[(i+1)%j][0];
				c[k][1]=b[(i+1)%j][1];
				k++;
			}
		}
		else{
			if(b[(i+1)%j][1]<yn){
				c[k][1]=yn;
				c[k][0]=b[i][0]+(yn-b[i][1])/((b[(i+1)%j][1]-b[i][1])/(b[(i+1)%j][0]-b[i][0]));
				k++;
			}
			else{
				c[k][0]=b[(i+1)%j][0];
				c[k][1]=b[(i+1)%j][1];
				k++;
			}
		}	
	}
	int l=0;
	for(i=0;i<k;i++){
		if(c[i%k][0]>xx){
			if(c[(i+1)%k][0]>xx){
				;
			}
			else{
				d[l][0]=xx;
				d[l][1]=((c[(i+1)%k][1]-c[i][1])/(c[(i+1)%k][0]-c[i][0]))*(xx-c[i][0])+c[i][1];
				l++;
				d[l][0]=c[(i+1)%k][0];
				d[l][1]=c[(i+1)%k][1];
				l++;
			}
		}
		else{
			if(c[(i+1)%k][0]>xx){
				d[l][0]=xx;
				d[l][1]=((c[(i+1)%k][1]-c[i][1])/(c[(i+1)%k][0]-c[i][0]))*(xx-c[i][0])+c[i][1];
				l++;
			}
			else{
				d[l][0]=c[(i+1)%k][0];
				d[l][1]=c[(i+1)%k][1];
				l++;
			}
		}	
	}
	int m=0;
	for(i=0;i<l;i++){
		if(d[i%l][1]>yx){
			if(d[(i+1)%l][1]>yx){
				;
			}
			else{
				e[m][1]=yx;
				e[m][0]=d[i][0]+(yx-d[i][1])/((d[(i+1)%l][1]-d[i][1])/(d[(i+1)%l][0]-d[i][0]));
				m++;
				e[m][0]=d[(i+1)%l][0];
				e[m][1]=d[(i+1)%l][1];
				m++;
			}
		}
		else{
			if(d[(i+1)%l][1]>yx){
				e[m][1]=yx;
				e[m][0]=d[i][0]+(yx-d[i][1])/((d[(i+1)%l][1]-d[i][1])/(d[(i+1)%l][0]-d[i][0]));
				m++;
			}
			else{
				e[m][0]=d[(i+1)%l][0];
				e[m][1]=d[(i+1)%l][1];
				m++;
			}
		}	
	}
	for(i=0;i<m;i++){
		line(e[i][0],e[i][1],e[(i+1)%m][0],e[(i+1)%m][1]);
	}
	getch();
	closegraph();
	return 0;

}
