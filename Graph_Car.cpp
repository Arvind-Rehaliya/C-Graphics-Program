#include <graphics.h>
#include <conio.h>
#include <stdio.h>
char arr[10], arr1[10];
/*void cal(int x) {
int i, len=0, y=x;
for(y; y!=0; y /=10) {
    len++;
 }
 for(i=0; i<len; i++) {
 y=x%10;
 x=x/10;
 arr[i] = y+'0';
 } arr[i]='\0';
   arr1[i]='\0';
 for(i=len-1; i>=0; i--) {
   arr1[len-i-1] = arr[i]; //  3 2 1 0
                            // 0 1 2 3
 }
 } */
int main() {
 int gd=0, gm, x, y, i, page = 0;
 initgraph(&gd, &gm, 0);
x= getmaxx();
y=getmaxy();
//cal(x);
sprintf(arr, "%d", x);
outtextxy(10, 10, arr);
sprintf(arr1, "%d", y);
//cal(x);
outtextxy(60, 10, arr1);    // 639  479
 setcolor(DARKGRAY);   //ROAD
	rectangle(0, 379, 639, 479);
	setfillstyle(SOLID_FILL, DARKGRAY);
	floodfill(1, 380, DARKGRAY);
	setcolor(WHITE);
	rectangle(20, 420, 120, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(21, 421, WHITE);
	rectangle(140, 420, 240, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(141, 421, WHITE);
	rectangle(260, 420, 360, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(261, 421, WHITE);
	rectangle(380, 420, 480, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(381, 421, WHITE);
	rectangle(500, 420, 600, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(501, 421, WHITE);
    i=0;
	while(1) {
    setactivepage(page);
    setvisualpage(1 - page);
    cleardevice();
    setcolor(DARKGRAY);   //ROAD
	rectangle(0, 379, 639, 479);
	setfillstyle(SOLID_FILL, DARKGRAY);
	floodfill(1, 380, DARKGRAY);
	setcolor(WHITE);
	rectangle(20, 420, 120, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(21, 421, WHITE);
	rectangle(140, 420, 240, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(141, 421, WHITE);
	rectangle(260, 420, 360, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(261, 421, WHITE);
	rectangle(380, 420, 480, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(381, 421, WHITE);
	rectangle(500, 420, 600, 435);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(501, 421, WHITE);



	line(50+i, 364, 85+i, 364);  //lower
	line(115+i, 364, 185+i, 364);
	line(215+i, 364, 255+i, 364);
	line(50+i, 330, 50+i, 364);  //raise
	line(255+i, 340, 255+i, 364);
	line(50+i, 330, 75+i, 330); //above lower
	line(75+i, 330, 103+i, 300);
	line(103+i, 300, 175+i, 300);
	line(175+i, 300, 203+i, 327);
	line(203+i, 327, 255+i, 340);
	line(82+i, 330, 104+i, 306);
	line(104+i, 304, 134+i, 304);  //first wind roof
	line(134+i, 304, 134+i, 329);
	line(82+i, 330, 133+i, 330);
	line(143+i, 305, 143+i,329);
	line(143+i, 305, 173+i, 305);
	line(173+i, 305, 197+i, 329);
	line(143+i, 329, 197+i, 329);
	line(147+i, 337, 153+i, 337); // handle
	line(147+i, 338, 153+i, 338);
	line(86+i, 337, 92+i, 337);
	line(86+i, 338, 92+i, 338);
	rectangle(255+i, 345, 258+i, 355);
	rectangle(47+i, 354, 50+i, 364);
	circle(100+i, 364, 15);
	circle(100+i, 364, 2);
	circle(200+i, 364, 15);
	circle(200+i, 364, 2);
	i++;
	//cleardevice();
	if((50+i) == 679) return 0;
	delay(100);
	page = 1-page;
	}
getch();
closegraph();
return 0;
}
