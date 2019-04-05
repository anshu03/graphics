#include<stdio.h>
#include<graphics.h>
int main(){
int gd=DETECT,gm;
int x[4],y[4],px,py,i,n;
double t;
/*printf(&quot;Enter the no of control points 2 for linear Bezier 3 for Quadratic Bezier 4 for cubic
Bezier\n&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;Enter the control points of bezier curve: &quot;);*/
printf("enter the number of control points:\n");
scanf("%d",&n);
 
for(i=0;i<n;i++)
{
scanf("%d%d",&x[i],&y[i]);
//putpixel(x[i],y[i],GREEN);
}
initgraph(&gd,&gm,NULL);
for(i=0;i<n;i++)
{
//scanf(&quot;%d%d&quot;,&amp;x[i],&amp;y[i]);
putpixel(x[i],y[i],GREEN);
}
if(n==2){
for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*x[0]+x[1];
py=(1-t)*y[0]+y[1];
putpixel(px,py,WHITE);
delay(2);
}}
 
if (n==3){
for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1- t)*x[0]+2*t*(1-t)*x[1]+t*t*x[2];
py=(1-t)*(1- t)*y[0]+2*t*(1-t)*y[1]+t*t*y[2];
putpixel(px,py,WHITE);
 
delay(2);
}
}
 
if(n==4){
for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1- t)*(1-t)*x[0]+3*t*(1- t)*(1-t)*x[1]+3*t*t*(1- t)*x[2]+t*t*t*x[3];
py=(1-t)*(1- t)*(1-t)*y[0]+3*t*(1- t)*(1-t)*y[1]+3*t*t*(1- t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
delay(2);
}
}
getch();
closegraph();
}
