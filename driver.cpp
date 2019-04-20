#include "GP142.h"
#include "circle.h"
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <vector>

#define TEXT_SIZE 20

using namespace std;

void draw_line(int x1, int y1, int x2, int y2, int color = WHITE, int width = 10)
{
	GP142_lineXY(color, x1, y1, x2, y2, width);
}

void draw_circle(int x, int y, int radius, int color = WHITE)
{
	GP142_circleXY(color, x, y, radius);
}

void draw_rectangle(int x, int y, int x1, int y1, int thickness = 0, int color = WHITE)
{
	GP142_point p1, p2;
	p1.x = x;
	p1.y = y;
	p2.x = x1;
	p2.y = y1;
	GP142_rectangleP(color, p1, p2, thickness);
}

void colorPixel(int x, int y)
{
	GP142_pixelXY(GREEN, x, y);
}

//B) EVENT HANDLERS
//Mouse handler
void handle_mouse(int x, int y)
{
	GP142_printfXY(YELLOW, x, y, 9, "Mouse at (%d,%d)", x, y);
}

//Keyboard handler
void handle_kbd(char c)
{
	//put the character anywhere you want to.
	//I'm putting it on the origin
	GP142_printfXY(WHITE, 0, 0, TEXT_SIZE, "%c", c);
}

int main()
{
	int quit = 0; /* has user signaled quit yet?                      */
	int mouse_x, mouse_y;
	int mouse_x1, mouse_y1;
	char key_pressed;
	GP142_open(); /* Open and initialize the GP142 Graphics Window    */

	int pcount = 0;
	std::vector<GP142_point> points;

	GP142_point a;
	a.x = 100;
	a.y = 200;

	points.push_back(a);

	Circle my_circle(points, 1, 1, WHITE, 20);
	my_circle.draw();

	while (!quit)
	{

		switch (GP142_await_event(&mouse_x, &mouse_y, &key_pressed))
		{
		case GP142_QUIT:
			quit = 1; /* set flag to terminate loop                */
			break;

		case GP142_MOUSE:
			handle_mouse(mouse_x, mouse_y);

			//points[2 * pcount] = mouse_x;
			//points[2 * pcount + 1] = mouse_y;
			//pcount++;

			//if (pcount == 2)
			//{
			//	pcount = 0;
			//	draw_line(points[0], points[1],
			//			  points[2], points[3]);
			//}

			//draw_circle(mouse_x,mouse_y, 50);
			//GP142_await_event(&mouse_x1, &mouse_y1, &key_pressed);
			//draw_rectangle(mouse_x, mouse_y, mouse_x1, mouse_y1);
			break;

		case GP142_KBD:
			//Keyboard handler
			handle_kbd(key_pressed);
			break;

		default:
			break;
		}
	}

	GP142_close(); /* Clean up and close graphics window           */

	return 0;
}
