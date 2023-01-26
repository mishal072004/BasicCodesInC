// C program for the above approach

#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
void main()
{
	// Initialize of gdriver with
	// DETECT macros
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");

	// Creating the base rectangle
	line(250, 100, 250, 600);
	line(250, 100, 250, 600);

	// Fill the White Color
	setfillstyle(SOLID_FILL, WHITE);

	// Create and fill the top strip
	rectangle(225, 600, 275, 610);
	rectangle(200, 610, 300, 620);

	floodfill(227, 608, 15);
	floodfill(202, 618, 15);

	// Fill the Light Red Color
	setfillstyle(SOLID_FILL, LIGHTRED);

	// Create and fill the ashoka
	// chakra with Blue
	rectangle(250, 100, 650, 280);
	line(250, 160, 650, 160);
	floodfill(252, 158, 15);

	// Fill the Blue Color
	setfillstyle(SOLID_FILL, BLUE);

	// Create and fill the left
	// part of the middle strip

	// Create a Circle
	circle(450, 190, 30);
	floodfill(452, 188, 15);

	// Fill the White Color
	setfillstyle(SOLID_FILL, WHITE);

	// Create and fill the right
	// part of the middle strip
	line(250, 160, 480, 160);
	line(250, 220, 480, 220);
	floodfill(252, 162, 15);

	// Fill the White Color
	setfillstyle(SOLID_FILL, WHITE);

	// Create and fill the bottom
	// strip
	line(480, 160, 650, 160);
	line(480, 220, 650, 220);
	floodfill(482, 162, 15);

	// Fill the Green Color
	setfillstyle(SOLID_FILL, GREEN);

	line(250, 220, 650, 220);
	floodfill(252, 278, 15);

	// Close the initialized gdriver
	closegraph();
}
