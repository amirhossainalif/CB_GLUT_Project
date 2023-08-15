#include <windows.h>
#include <GL/glut.h>

void Rainbow_Flag()
{
    glBegin(GL_POLYGON);
    glColor3ub(153,51,255);
    glVertex2i(8,6);
    glVertex2i(8,5);
    glVertex2i(1,5);
    glVertex2i(1,6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,102,204);
    glVertex2i(8,5);
    glVertex2i(8,4);
    glVertex2i(1,4);
    glVertex2i(1,5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(13,203,222);
    glVertex2i(8,4);
    glVertex2i(8,3);
    glVertex2i(1,3);
    glVertex2i(1,4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,178,255);
    glVertex2i(8,3);
    glVertex2i(8,4);
    glVertex2i(1,4);
    glVertex2i(1,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2i(8,2);
    glVertex2i(8,3);
    glVertex2i(1,3);
    glVertex2i(1,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,128,0);
    glVertex2i(8,1);
    glVertex2i(8,2);
    glVertex2i(1,2);
    glVertex2i(1,1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,102);
    glVertex2i(8,0);
    glVertex2i(8,1);
    glVertex2i(1,1);
    glVertex2i(1,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(1,0);
    glVertex2i(1,-1);
    glVertex2i(8,-1);
    glVertex2i(8,0);
    glEnd();
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Rainbow_Flag();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("A Rainbow Flag");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-10,10,-10,10);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

