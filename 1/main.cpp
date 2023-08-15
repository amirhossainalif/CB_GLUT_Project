#include<windows.h>
#include <GL/glut.h>

void rectangle()
{
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(2,5);
    glVertex2i(6,5);
    glVertex2i(6,5);
    glVertex2i(6,3);
    glVertex2i(6,3);
    glVertex2i(2,3);
    glVertex2i(2,3);
    glVertex2i(2,5);
    glEnd();
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0);
    rectangle();
	glFlush();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Rectangle using line");
	glutInitWindowSize(520, 520);
	gluOrtho2D(-10,10,-10,10);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

