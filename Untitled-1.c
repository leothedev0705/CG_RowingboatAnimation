#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
    int gdriver = DETECT, gmode, err;
    int i = 0, j, x, y, x1, y1, x2, y2;
    initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
    err = graphresult();

    if (err != grOk)
    {
        printf("Graphics Error: %s\n", grapherrormsg(err));
        return 0;
    }

    j = 0;
    x = 50, y = getmaxy() / 2 + 140;

    while (x + 60 < getmaxx() && (!kbhit()))
    {
        x1 = 10, i = y1 = 0;
        x2 = 0, y2 = 50;
        cleardevice();
        setcolor(LIGHTBLUE);
        setlinestyle(SOLID_LINE, 1, 1);
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        rectangle(0, getmaxy() / 2 + 150, getmaxx(), getmaxy());
        floodfill(getmaxx() - 10, getmaxy() - 10, LIGHTBLUE);
        setlinestyle(DASHED_LINE, 1, 2);
        while (i < 700)
        {
            line(x1, y1, x2, y2);
            x1 = x1 + 20;
            y2 = y2 + 50;
            i++;
        }
        setlinestyle(SOLID_LINE, 1, 2);
        setcolor(LIGHTRED);
        setfillstyle(SOLID_FILL, LIGHTRED);
        sector(x, y, 180, 360, 50, 10);
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE, 1, 3);
        line(x + 40, y - 15, x + 40, y - 40);
        line(x + 40, y - 15, x + 45, y - 10);
        line(x + 45, y - 10, x + 45, y);
        line(x + 40, y - 15, x + 37, y);
        circle(x + 40, y - 45, 5);
        line(x + 40, y - 35, x + 50, y - 30);
        line(x + 40, y - 35, x + 35, y - 32);
        line(x + 35, y - 32, x + 45, y - 25);
        line(x + 60, y - 45, x + 27, y + 10);
        x++;
        setcolor(LIGHTBLUE);
        delay(250);
        cleardevice();
        setlinestyle(SOLID_LINE, 1, 1);
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        rectangle(0, getmaxy() / 2 + 150, getmaxx(), getmaxy());
        floodfill(getmaxx() - 10, getmaxy() - 10, LIGHTBLUE);
        setlinestyle(DASHED_LINE, 1, 2);
        x1 = 10, i = y1 = 0;
        x2 = 0, y2 = 70;

        while (i < 700)
        {
            line(x1, y1, x2, y2);
            x1 = x1 + 30;
            y2 = y2 + 60;
            i++;
        }

        setlinestyle(SOLID_LINE, 1, 1);
        setcolor(RED);
        setfillstyle(SOLID_FILL, LIGHTRED);
        sector(x, y, 180, 360, 50, 10);
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE, 1, 3);
        line(x + 40, y - 15, x + 40, y - 40);
        line(x + 40, y - 15, x + 45, y - 10);
        line(x + 45, y - 10, x + 45, y);
        line(x + 40, y - 15, x + 37, y);
        circle(x + 40, y - 45, 5);
        line(x + 40, y - 35, x + 52, y - 30);
        line(x + 40, y - 35, x + 37, y - 32);
        line(x + 37, y - 32, x + 49, y - 25);
        line(x + 60, y - 45, x + 27, y + 10);
        x++;
        delay(150);
        cleardevice();
        j++;
    }

    getch();
    closegraph();
    return 0;
}
