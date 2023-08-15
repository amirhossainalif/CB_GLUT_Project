#include <windows.h>
#include <GL/glut.h>

void p1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-2.5,4.0);
    glVertex2f(-5.0,1.5);
    glVertex2f(-5.0,-1.5);
    glVertex2f(-2.5,-4.0);
    glVertex2f(2.5,-4.0);
    glVertex2f(5.0,-1.5);
    glVertex2f(5.0,1.5);
    glVertex2f(2.5,4.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-2.5,3.7);
    glVertex2f(-4.7,1.5);
    glVertex2f(-4.7,-1.5);
    glVertex2f(-2.5,-3.7);
    glVertex2f(2.5,-3.7);
    glVertex2f(4.7,-1.5);
    glVertex2f(4.7,1.5);
    glVertex2f(2.5,3.7);
    glEnd();
}


void batman()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(4.6,0.0);
    glVertex2f(4.6,1.25);
    glVertex2f(2.3,3.5);
    glVertex2f(2.3,2.1);
    glVertex2f(1.0,2.1);
    glVertex2f(1.0,3.6);
    glVertex2f(0.5,3.2);
    glVertex2f(0.0,3.2);
    glVertex2f(0.0,0.0);
    glVertex2f(-4.6,0.0);
    glVertex2f(-4.6,1.25);
    glVertex2f(-2.3,3.5);
    glVertex2f(-2.3,2.1);
    glVertex2f(-1.0,2.1);
    glVertex2f(-1.0,3.6);
    glVertex2f(-0.5,3.2);
    glVertex2f(0.0,3.2);
    glVertex2f(0.0,0.0);
    glVertex2f(4.6,0.0);
    glVertex2f(4.6,-1.25);
    glVertex2f(2.3,-3.5);
    glVertex2f(2.3,-2.1);
    glVertex2f(1.0,-2.1);
    glVertex2f(0.0,-3.6);
    glVertex2f(0.0,0.0);
    glVertex2f(-4.6,0.0);
    glVertex2f(-4.6,-1.25);
    glVertex2f(-2.3,-3.5);
    glVertex2f(-2.3,-2.1);
    glVertex2f(-1.0,-2.1);
    glVertex2f(0.0,-3.6);
    glEnd();
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    p1();
    batman();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Batman logo");
	gluOrtho2D(-10,10,-10,10);
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


