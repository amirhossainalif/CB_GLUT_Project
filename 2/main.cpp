#include<windows.h>
#include <GL/glut.h>

void rectangle()
{
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(3.5,5.0);
    glVertex2f(6.5,5.0);
    glVertex2f(7.5,2.0);
    glVertex2f(2.5,2.0);
    glEnd();
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    rectangle();
	glFlush();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Rectangle");
	glutInitWindowSize(520, 520);
	gluOrtho2D(-10,10,-10,10);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

