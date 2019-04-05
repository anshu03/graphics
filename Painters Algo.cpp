#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
 
int main(){
int gd=DETECT, gm;
    //detectgraph(&gd, &gm);
    initgraph(&gd, &gm,NULL);
setcolor(BLUE);
rectangle(50,50,200,200);
setcolor(RED);
floodfill(100,100,BLUE);
setcolor(GREEN);
circle(200,200,20);
floodfill(200,200,GREEN);
setcolor(YELLOW);
int points[]={100,100,30,20,100,20,100,100};
drawpoly(4,points);
setcolor(WHITE);
floodfill(35,25,YELLOW);
delay(1000);
closegraph();
return 0;
}
