#include <graphics.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int x1,y1,x2,y2;
	cout<<"Enter the starting points"<<endl;
	cin>>x1>>y1;
	cout<<"Enter the end points"<<endl;
	cin>>x2>>y2;
	int gd = DETECT,gm; 
	initgraph (& gd,& gm,NULL);

	int m = (y2-y1)/(x2-x1);
	int x,y;
	if(m<=1){
		x = x1;
		y = y1;

		for(; x<=x2;x++){
			putpixel(x,round(y),7);
			y+=m;
			delay(10);
		}
	}
	else{
		x=x1;
		y=y1;
		for(;y<=y2;y++){
			putpixel(y,round(x),7);
			x+=m;
			delay(10);
		}
	}
	delay(1000);
	closegraph();

}