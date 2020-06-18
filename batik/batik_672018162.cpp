#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <GL/freeglut.h>



void bundar(int x_pos, int y_pos, double r, int vertex) {
	double ngon = (double)vertex;
	glBegin(GL_POINTS);
	for (int i = 0; i < vertex; i++) {
		double x = x_pos + r * cos(2 * M_PI * i / ngon);
		double y = y_pos + r * sin(2 * M_PI * i / ngon);
		glVertex2d(x, y);

	}
	glEnd();
}
void titik(int x_pos, int y_pos, double r, int vertex) {
	double ngon = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = x_pos + r * cos(2 * M_PI * i / ngon);
		double y = y_pos + r * sin(2 * M_PI * i / ngon);
		glVertex2d(x, y);

	}
	glEnd();
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	//1
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-95, 90);
	glVertex2f(-90, 90);
	glVertex2f(-90, 55);
	glVertex2f(-95, 55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-75, 90);
	glVertex2f(-70, 90);
	glVertex2f(-70, 55);
	glVertex2f(-75, 55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-100, 85);
	glVertex2f(-65, 85);
	glVertex2f(-65, 80);
	glVertex2f(-100, 80);
	glEnd();

	glColor3f(1.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-100, 65);
	glVertex2f(-65, 65);
	glVertex2f(-65, 60);
	glVertex2f(-100, 60);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-93, 82.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-73, 82.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-93, 62.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-73, 62.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(-40, 73, 12, 60);
	titik(-93, 77, 2, 60);
	titik(-93, 69, 2, 60);
	titik(-93, 58, 2, 60);
	titik(-93, 87, 2, 60);

	titik(-98, 63, 2, 60);
	titik(-98, 83, 2, 60);

	titik(-73, 87, 2, 60);
	titik(-73, 69, 2, 60);
	titik(-73, 77, 2, 60);
	titik(-73, 58, 2, 60);

	titik(-87, 63, 2, 60);
	titik(-87, 83, 2, 60);
	titik(-68, 63, 2, 60);
	titik(-78, 63, 2, 60);
	titik(-68, 83, 2, 60);
	titik(-78, 83, 2, 60);

	//2
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-5, 90);
	glVertex2f(-10, 90);
	glVertex2f(-10, 55);
	glVertex2f(-5, 55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(15, 90);
	glVertex2f(10, 90);
	glVertex2f(10, 55);
	glVertex2f(15, 55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-15, 85);
	glVertex2f(20, 85);
	glVertex2f(20, 80);
	glVertex2f(-15, 80);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 65);
	glVertex2f(-15, 65);
	glVertex2f(-15, 60);
	glVertex2f(20, 60);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(12, 82.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-8, 82.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-8, 62.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(12, 62.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(40, 73, 12, 60);
	titik(-8, 77, 2, 60);
	titik(-8, 69, 2, 60);
	titik(-8, 58, 2, 60);
	titik(-8, 87, 2, 60);

	titik(-13, 63, 2, 60);
	titik(-13, 83, 2, 60);

	titik(-2, 63, 2, 60);
	titik(6, 63, 2, 60);
	titik(-2, 83, 2, 60);
	titik(6, 83, 2, 60);

	titik(17, 63, 2, 60);
	titik(17, 83, 2, 60);

	titik(12, 87, 2, 60);
	titik(12, 69, 2, 60);
	titik(12, 77, 2, 60);
	titik(12, 58, 2, 60);

	//3
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 90);
	glVertex2f(75, 90);
	glVertex2f(75, 55);
	glVertex2f(70, 55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 90);
	glVertex2f(95, 90);
	glVertex2f(95, 55);
	glVertex2f(90, 55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(100, 85);
	glVertex2f(65, 85);
	glVertex2f(65, 80);
	glVertex2f(100, 80);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(100, 65);
	glVertex2f(65, 65);
	glVertex2f(65, 60);
	glVertex2f(100, 60);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(72, 82.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(93, 82.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(93, 62.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(72, 62.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	titik(92, 77, 2, 60);
	titik(92, 69, 2, 60);
	titik(92, 58, 2, 60);
	titik(92, 87, 2, 60);

	titik(97, 63, 2, 60);
	titik(97, 83, 2, 60);

	titik(72, 87, 2, 60);
	titik(72, 69, 2, 60);
	titik(72, 77, 2, 60);
	titik(72, 58, 2, 60);

	titik(86, 63, 2, 60);
	titik(86, 83, 2, 60);
	titik(67, 63, 2, 60);
	titik(77, 63, 2, 60);
	titik(67, 83, 2, 60);
	titik(77, 83, 2, 60);

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(85, 30, 12, 60);

	//4
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50, 10);
	glVertex2f(-55, 10);
	glVertex2f(-55, 45);
	glVertex2f(-50, 45);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-30, 10);
	glVertex2f(-35, 10);
	glVertex2f(-35, 45);
	glVertex2f(-30, 45);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-60, 40);
	glVertex2f(-25, 40);
	glVertex2f(-25, 35);
	glVertex2f(-60, 35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-60, 15);
	glVertex2f(-25, 15);
	glVertex2f(-25, 20);
	glVertex2f(-60, 20);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-53, 37.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-33, 37.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-33, 17.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-53, 17.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	titik(-53, 32, 2, 60);
	titik(-53, 24, 2, 60);
	titik(-53, 13, 2, 60);
	titik(-53, 42, 2, 60);

	titik(-58, 38, 2, 60);
	titik(-58, 18, 2, 60);

	titik(-33, 32, 2, 60);
	titik(-33, 24, 2, 60);
	titik(-33, 13, 2, 60);
	titik(-33, 42, 2, 60);

	titik(-47, 38, 2, 60);
	titik(-47, 18, 2, 60);
	titik(-28, 38, 2, 60);
	titik(-38, 38, 2, 60);
	titik(-28, 18, 2, 60);
	titik(-38, 18, 2, 60);

	//5
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(-85, 30, 12, 60);


	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(35, 10);
	glVertex2f(30, 10);
	glVertex2f(30, 45);
	glVertex2f(35, 45);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(50, 10);
	glVertex2f(55, 10);
	glVertex2f(55, 45);
	glVertex2f(50, 45);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 40);
	glVertex2f(25, 40);
	glVertex2f(25, 35);
	glVertex2f(60, 35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 15);
	glVertex2f(25, 15);
	glVertex2f(25, 20);
	glVertex2f(60, 20);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(52, 37.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(32, 37.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(32, 17.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(52, 17.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	titik(52, 32, 2, 60);
	titik(52, 24, 2, 60);
	titik(52, 13, 2, 60);
	titik(52, 42, 2, 60);

	titik(57, 38, 2, 60);
	titik(57, 18, 2, 60);

	titik(32, 32, 2, 60);
	titik(32, 24, 2, 60);
	titik(32, 13, 2, 60);
	titik(32, 42, 2, 60);

	titik(47, 38, 2, 60);
	titik(47, 18, 2, 60);
	titik(28, 38, 2, 60);
	titik(38, 38, 2, 60);
	titik(28, 18, 2, 60);
	titik(38, 18, 2, 60);


	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(0, 30, 12, 60);

	//6
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-95, 0);
	glVertex2f(-90, 0);
	glVertex2f(-90, -35);
	glVertex2f(-95, -35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-75, 0);
	glVertex2f(-70, 0);
	glVertex2f(-70,-35);
	glVertex2f(-75,-35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-100, -5);
	glVertex2f(-65, -5);
	glVertex2f(-65, -10);
	glVertex2f(-100, -10);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-100, -25);
	glVertex2f(-65, -25);
	glVertex2f(-65, -30);
	glVertex2f(-100, -30);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-93, -7.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-73, -7.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-93, -27.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-73, -27.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(-40, -15, 12, 60);
	titik(-93, -22, 2, 60);
	titik(-93, -14, 2, 60);
	titik(-93, -3, 2, 60);
	titik(-93, -32, 2, 60);

	titik(-98, -8, 2, 60);
	titik(-98, -28, 2, 60);

	titik(-73, -32, 2, 60);
	titik(-73, -14, 2, 60);
	titik(-73, -22, 2, 60);
	titik(-73, -3, 2, 60);

	titik(-87, -8, 2, 60);
	titik(-87, -28, 2, 60);
	titik(-68, -8, 2, 60);
	titik(-78, -8, 2, 60);
	titik(-68, -28, 2, 60);
	titik(-78, -28, 2, 60);

	//7
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-5, 0);
	glVertex2f(-10, 0);
	glVertex2f(-10, -35);
	glVertex2f(-5, -35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(15, 0);
	glVertex2f(10, 0);
	glVertex2f(10, -35);
	glVertex2f(15, -35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-15, -5);
	glVertex2f(20, -5);
	glVertex2f(20, -10);
	glVertex2f(-15, -10);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(20, -25);
	glVertex2f(-15, -25);
	glVertex2f(-15, -30);
	glVertex2f(20, -30);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(12, -7.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-8, -7.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-8, -27.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(12, -27.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(40, -15, 12, 60);
	titik(-8, -22, 2, 60);
	titik(-8, -14, 2, 60);
	titik(-8, -3, 2, 60);
	titik(-8, -32, 2, 60);

	titik(-13, -8, 2, 60);
	titik(-13, -28, 2, 60);

	titik(-2, -8, 2, 60);
	titik(6, -8, 2, 60);
	titik(-2, -28, 2, 60);
	titik(6, -28, 2, 60);

	titik(17, -8, 2, 60);
	titik(17, -28, 2, 60);

	titik(12, -32, 2, 60);
	titik(12, -14, 2, 60);
	titik(12, -22, 2, 60);
	titik(12, -3, 2, 60);


	//8
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 0);
	glVertex2f(75, 0);
	glVertex2f(75, -35);
	glVertex2f(70, -35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 0);
	glVertex2f(95, 0);
	glVertex2f(95, -35);
	glVertex2f(90, -35);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(100, -5);
	glVertex2f(65, -5);
	glVertex2f(65, -10);
	glVertex2f(100, -10);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(100, -25);
	glVertex2f(65, -25);
	glVertex2f(65, -30);
	glVertex2f(100, -30);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(72, -7.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(93, -7.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(93, -27.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(72, -27.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	titik(92, -22, 2, 60);
	titik(92, -14, 2, 60);
	titik(92, -3, 2, 60);
	titik(92, -32, 2, 60);

	titik(97, -8, 2, 60);
	titik(97, -28, 2, 60);

	titik(72, -22, 2, 60);
	titik(72, -14, 2, 60);
	titik(72, -3, 2, 60);
	titik(72, -32, 2, 60);

	titik(86, -8, 2, 60);
	titik(86, -28, 2, 60);
	titik(67, -8, 2, 60);
	titik(77, -8, 2, 60);
	titik(67, -28, 2, 60);
	titik(77, -28, 2, 60);

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(85, -60, 12, 60);

	//9
	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50, -45);
	glVertex2f(-55, -45);
	glVertex2f(-55, -80);
	glVertex2f(-50, -80);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-30, -45);
	glVertex2f(-35, -45);
	glVertex2f(-35, -80);
	glVertex2f(-30, -80);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-60, -50);
	glVertex2f(-25, -50);
	glVertex2f(-25, -55);
	glVertex2f(-60, -55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-60, -75);
	glVertex2f(-25, -75);
	glVertex2f(-25, -70);
	glVertex2f(-60, -70);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-53, -52.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-33, -52.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-33, -72.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(-53, -72.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	titik(-53, -67, 2, 60);
	titik(-53, -59, 2, 60);
	titik(-53, -48, 2, 60);
	titik(-53, -77, 2, 60);

	titik(-58, -73, 2, 60);
	titik(-58, -53, 2, 60);

	titik(-33, -67, 2, 60);
	titik(-33, -59, 2, 60);
	titik(-33, -48, 2, 60);
	titik(-33, -77, 2, 60);

	titik(-47, -73, 2, 60);
	titik(-47, -53, 2, 60);
	titik(-28, -73, 2, 60);
	titik(-38, -73, 2, 60);
	titik(-28, -53, 2, 60);
	titik(-38, -53, 2, 60);

	//10
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(-85, -60, 12, 60);


	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(35, -80);
	glVertex2f(30, -80);
	glVertex2f(30, -45);
	glVertex2f(35, -45);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(50, -80);
	glVertex2f(55, -80);
	glVertex2f(55, -45);
	glVertex2f(50, -45);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(60, -50);
	glVertex2f(25, -50);
	glVertex2f(25, -55);
	glVertex2f(60, -55);
	glEnd();

	glColor3f(1.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(60, -75);
	glVertex2f(25, -75);
	glVertex2f(25, -70);
	glVertex2f(60, -70);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(52, -52.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(32, -52.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(32, -72.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(52, -72.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	titik(52, -67, 2, 60);
	titik(52, -59, 2, 60);
	titik(52, -48, 2, 60);
	titik(52, -77, 2, 60);

	titik(57, -73, 2, 60);
	titik(57, -53, 2, 60);

	titik(32, -67, 2, 60);
	titik(32, -59, 2, 60);
	titik(32, -48, 2, 60);
	titik(32, -77, 2, 60);

	titik(47, -73, 2, 60);
	titik(47, -53, 2, 60);
	titik(28, -73, 2, 60);
	titik(38, -73, 2, 60);
	titik(28, -53, 2, 60);
	titik(38, -53, 2, 60);


	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1);
	bundar(0, -60, 12, 60);

	glutSwapBuffers();

}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Batik Nitik Kembang Jeruk 672018162");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}