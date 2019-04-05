#include <stdio.h>
#include <math.h>

double min(double a, double b){
	if(a<b)
		return a;
	return b;
}

void hsi2rgb(double h, double s, double i, double* r, double* g, double* b){
	double x = (1 - s)/3;	
	printf("%lf", x);	
	if(h < 2 * M_PI / 3){
		printf("hi\n");
		double y = (1 + (s * cos(h)) / (cos(M_PI / 3 - h)))/3;
		double z = 1 - (x + y);
		*b = 3*i*x; *r = 3*i*y; *g = 3*i*z;
	}
	else if(h < 4 * M_PI / 3){
		double y = i * (1 + (s * cos(h - 2 * M_PI / 3)) / (cos(M_PI / 3 - (h  - 2 * M_PI / 3))));
		double z = i - (x + y);
		*r = x; *g = y; *b = z;
	}
	else{
		double y = i * (1 + (s * cos(h - 4 * M_PI / 3)) / (cos(M_PI / 3 - (h  - 4 * M_PI / 3))));
		double z = i - (x + y);
		*r = z; *g = x; *b = y;
	}
}

void rgb2hsi(double r, double g, double b, double* h, double* s, double* i){
   	*i = (r + g + b) / 3.0;

	double rn = r / (r + g + b);
	double gn = g / (r + g + b);
	double bn = b / (r + g + b);

	*h = acos((0.5 * ((rn - gn) + (rn - bn))) / (sqrt((rn - gn) * (rn - gn) + (rn - bn) * (gn - bn))));
	if(b > g){
		*h = 2 * M_PI - *h;	
	}
	*s = 1 - 3 * min(rn, min(gn, bn));
}

int main(){
	double r = 100, g= 200, b= 50;
	double h, s, i;
	rgb2hsi(r, g, b, &h, &s, &i);
	hsi2rgb(h, s, i, &r, &g, &b);
	printf("%lf %lf %lf\n", h, s, i);
	printf("%lf %lf %lf\n", r, g, b);
	return 0;
}
