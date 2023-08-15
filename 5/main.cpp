#include <windows.h>
#include <GL/glut.h>

void chess_board()
{
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(-8,8);
    glVertex2i(-4,8);
    glVertex2i(-4,4);
    glVertex2i(-8,4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-4,8);
    glVertex2i(0,8);
    glVertex2i(0,4);
    glVertex2i(-4,4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(0,8);
    glVertex2i(4,8);
    glVertex2i(4,4);
    glVertex2i(0,4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(4,8);
    glVertex2i(8,8);
    glVertex2i(8,4);
    glVertex2i(4,4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(4,4);
    glVertex2i(8,4);
    glVertex2i(8,0);
    glVertex2i(4,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(4,4);
    glVertex2i(0,4);
    glVertex2i(0,0);
    glVertex2i(4,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(0,4);
    glVertex2i(0,0);
    glVertex2i(-4,0);
    glVertex2i(-4,4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-4,4);
    glVertex2i(-4,0);
    glVertex2i(-8,0);
    glVertex2i(-8,4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(-8,0);
    glVertex2i(-8,-4);
    glVertex2i(-4,-4);
    glVertex2i(-4,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-4,0);
    glVertex2i(-4,-4);
    glVertex2i(0,-4);
    glVertex2i(0,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(0,-4);
    glVertex2i(0,0);
    glVertex2i(4,0);
    glVertex2i(4,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(4,0);
    glVertex2i(4,-4);
    glVertex2i(8,-4);
    glVertex2i(8,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(8,-4);
    glVertex2i(8,-8);
    glVertex2i(4,-8);
    glVertex2i(4,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(4,-4);
    glVertex2i(4,-8);
    glVertex2i(0,-8);
    glVertex2i(0,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(0,-4);
    glVertex2i(0,-8);
    glVertex2i(-4,-8);
    glVertex2i(-4,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-4,-4);
    glVertex2i(-4,-8);
    glVertex2i(-8,-8);
    glVertex2i(-8,-4);
    glEnd();
}

void display()
{
    glClearColor(1.0f, 0.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    chess_board();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("4X4 Chess Board");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-10,10,-10,10);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

