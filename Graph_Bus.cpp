#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int gd=0, gm, i=0, k=1, j=0;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");

  for(j; j<getmaxx(); j++)
  {
  	// setcolor(WHITE);
    // rectangle(0, 0, 639, 479);  //BORDER

    for(i; i<k; i++)
    {

    	int x=rand() % getmaxx()+1;
        int y=rand() % getmaxx()+1;
        int a=rand() % getmaxx()+1;
        int b=rand() % getmaxx()+1;
        int c=rand() % getmaxx()+1;
        int d=rand() % getmaxx()+1;
        int e=rand() % getmaxx()+1;
        int f=rand() % getmaxx()+1;
        int g=rand() % getmaxx()+1;
        int h=rand() % getmaxx()+1;
        int i=rand() % getmaxx()+1;
        int j=rand() % getmaxx()+1;
         int k=rand() % getmaxx()+1;
        int l=rand() % getmaxx()+1;
        int m=rand() % getmaxx()+1;
        int n=rand() % getmaxx()+1;
        int o=rand() % getmaxx()+1;
        int p=rand() % getmaxx()+1;
        putpixel(x,y,WHITE);
        putpixel(a,b,WHITE);
        putpixel(c,d,WHITE);
        putpixel(e,f,WHITE);
        putpixel(g,h,WHITE);
        putpixel(i,j,WHITE);
         putpixel(k,l,WHITE);
        putpixel(m,n,WHITE);
        putpixel(o,p,WHITE);

     }

    setcolor(BLACK);
  	rectangle(0, 0, 639, 382); //BACKGROUND
  	setfillstyle(SOLID_FILL, BLACK);
    floodfill(1, 1, BLACK);

  	setcolor(WHITE); // MOON
  	circle(30+j, 70, 25);
  	setfillstyle(SOLID_FILL, WHITE);
  	floodfill(30+j, 70, WHITE);

  	 setcolor(DARKGRAY);   //ROAD
	rectangle(0, 378, 639, 479);
	setfillstyle(SOLID_FILL, DARKGRAY);
	floodfill(1, 379, DARKGRAY);
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

	 setcolor(BROWN);
    rectangle(540, 290, 638, 331); //WELCOME POLE
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(541, 291, BROWN);
    setcolor(BROWN);
    rectangle(580, 331, 590, 391);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(581, 332, BROWN);
    setcolor(WHITE);
    outtextxy(556, 305, "VICE CITY");

    setcolor(GREEN); // L=220 B=60 BUS CHASI
    rectangle(10+j, 336, 225+j, 396);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(11+j,337, GREEN);

    setcolor(BLACK);  //  BUMPERS .....
     rectangle(5+j, 386, 10+j, 396);
     setfillstyle(SOLID_FILL, BLACK);
    floodfill(6+j,387, BLACK);
    line(65+j, 326, 75+j, 331);
     setcolor(GREEN);
   rectangle(25+j, 331, 90+j, 336); //TOP
   setfillstyle(SOLID_FILL, GREEN);
   floodfill(26+j, 332, GREEN);

    rectangle(35+j, 326, 65+j, 331);
      setfillstyle(SOLID_FILL, GREEN);
    floodfill(36+j,327, GREEN);

   setcolor(YELLOW);
   rectangle(225+j, 380, 227+j, 386);
      setfillstyle(SOLID_FILL, WHITE);
    floodfill(226+j,381, YELLOW);

    setcolor(LIGHTGRAY); // Windows :   L=  B=35
    rectangle(15+j, 341, 45+j, 371);
       setfillstyle(SOLID_FILL,LIGHTGRAY );
    floodfill(16+j,342, LIGHTGRAY);
    rectangle(50+j, 341, 80+j, 371);
       setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(51+j,342, LIGHTGRAY);
    rectangle(85+j, 341, 115+j, 371);
       setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(86+j,342, LIGHTGRAY);
    rectangle(120+j, 341, 150+j, 371);
       setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(121+j,342, LIGHTGRAY);
    rectangle(155+j, 341, 185+j, 371);
       setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(156+j,342, LIGHTGRAY);
    rectangle(190+j, 341, 220+j, 371);
       setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(191+j,342, LIGHTGRAY);

    setcolor(BLACK);   //TYRES
	circle(80+j, 391, 15);
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(80+j, 391, BLACK);
	circle(180+j, 391, 15);
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(180+j, 391, BLACK);
	setcolor(WHITE);
	circle(80+j, 391, 1);
	circle(180+j, 391, 1);




   /* setcolor(GREEN);
    line( 10+j, 336, 225+j,336); // L=220 B=60 BUS
    line(10+j, 336, 10+j, 393);
    line(225+j, 336, 225+j, 396);

    line(10+j, 393, 63+j, 396);
    line(97+j, 396, 162+j, 396);
    line(198+j, 396, 225+j, 396);  */
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(11+j,394, GREEN);



	/*for(i; i<k; i++)  // BLINKER
	{
    setcolor(YELLOW);
    fillellipse(20+j, 390, 4, 3);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(21+j, 390, YELLOW);
    delay(50);
    setcolor(YELLOW);
    fillellipse(20+j, 390, 4, 3);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(21+j, 391, YELLOW);
    delay(1000);
    } */
    k++;


    delay(100);
	cleardevice();
   }

    delay(1000);
	closegraph();
 	getch();
	return 0;
}
