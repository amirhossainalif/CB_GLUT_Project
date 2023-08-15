#include<windows.h>
#include <GL/glut.h>

void rectangle()
{
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2i(-5,5);
    glVertex2i(-1,5);
    glVertex2i(-1,2);
    glVertex2i(-5,2);
    glEnd();
}

void Arrow()
{
    glBegin(GL_POLYGON);

    glColor3ub(44,144,22);
    glVertex2i(5,2);
    glVertex2i(2,2);
    glVertex2i(2,4);
    glVertex2i(5,4);
    glVertex2i(5,6);
    glVertex2i(6,3);
    glVertex2i(5,0);

    glEnd();
}

void Triangle()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(236,255,51);
    glVertex2i(6,-6);
    glVertex2i(2,-6);
    glVertex2i(4,-2);

    glEnd();
}

void Triangle1()
{
    glBegin(GL_TRIANGLES);

    glColor3ub(78,16,135);
    glVertex2i(-5,-4);
    glVertex2i(-2,-2);
    glVertex2i(-2,-6);


    glEnd();
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    rectangle();
    Arrow();
    Triangle();
    Triangle1();
	glFlush();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(520, 520);
	gluOrtho2D(-10,10,-10,10);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

