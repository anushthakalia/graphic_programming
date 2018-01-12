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

	int dx = x2-x1;
	int dy = y2-y1;
	int p = 2*dy - dx;
	int x=x1;
	int y=y1;
	putpixel(x,y,2);

	while(x<=x2){
		if(p<0){
			x=x+1;
			p=2*x-dx;
		}
		else{
			x++;
			y++;
			p=2+2*dy;
		}
		putpixel(x,y,7);
		delay(1000);
	}

}