#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main() {
    int t, gd=0,flag1=0, gm, time=9, i=0, page=0;
    char arr[10];
    initgraph(&gd, &gm, 0);
    while(1) { flag1=0;
    for(i=time; i>=0; i--) {    // lights
    setactivepage(page);
    setvisualpage(1-page);
    //line(457, 30, 417, 70);
    //line(457, 30, 497, 70);

    setcolor(6);
    rectangle(447, 300, 467, 400);
    setfillstyle(SOLID_FILL, 6);
    floodfill(448, 301, 6);
    setcolor(YELLOW);
    rectangle(417, 70 , 497, 300);  // 639 479
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(451, 111, YELLOW);
    if(flag1==0) {
    setcolor(14);  //green light
    circle(457, 192, 33);   // 191
    setfillstyle(SOLID_FILL, 14);
    floodfill(458, 193, 14);
    //delay(3000);
    flag1=1; }
    else {
        setcolor(14);  //green light
    circle(457, 192, 33);   // 191
    setfillstyle(SOLID_FILL, 0);
    floodfill(458, 193, 14); flag1=0;
    }

    setcolor(10);  // yellow light
    circle(457, 262, 33);
    setfillstyle(SOLID_FILL, 10);
    floodfill(458, 262, 10);

    setcolor(RED);   //red light
    circle(457, 115, 33);
    setfillstyle(SOLID_FILL, 0);
    floodfill(458, 116, RED);
    setcolor(RED);   //red light
    circle(457, 115, 34);
    setfillstyle(SOLID_FILL, 0);
    floodfill(458, 116, RED);
    delay(500);
    page = 1-page;
    }
    flag1=0;
    for(i=time; i>=0; i--) {
    setactivepage(page);
    setvisualpage(1-page);
    setcolor(6);
    rectangle(447, 300, 467, 400);
    setfillstyle(SOLID_FILL, 6);
    floodfill(448, 301, BROWN);

    setcolor(YELLOW);
    rectangle(417, 70 , 497, 300);  // 639 479
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(451, 111, YELLOW);
     if(flag1==0) {
    setcolor(YELLOW);
    circle(457, 191, 33);
    setfillstyle(SOLID_FILL, 14);
    floodfill(458, 192, 14);
    flag1=1;
    //delay(3000);
    }
    else {
        setcolor(YELLOW);
    circle(457, 191, 33);
    setfillstyle(SOLID_FILL, 0);
    floodfill(458, 192, 14); flag1=0;
    }
    setcolor(RED);
    circle(457, 115, 33);
    setfillstyle(SOLID_FILL, 4);
    floodfill(458, 116, 4);
    setcolor(4);
    circle(457, 115, 33);
    setfillstyle(SOLID_FILL, 0);
    floodfill(458, 116, 4);

    setcolor(LIGHTGREEN);  //green light
    circle(457, 262, 33);
    setfillstyle(SOLID_FILL, 0);
    floodfill(458, 258, 10);
    delay(500);
    page = 1-page;
    } }
getch();
closegraph();
return 0;
}
