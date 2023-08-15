#include <windows.h>
#include <GL/glut.h>

void bench()
{
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(28,-40);
    glVertex2i(29,-40);
    glVertex2i(29,-34);
    glVertex2i(28,-35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(27,-34);
    glVertex2i(40,-43);
    glVertex2i(40,-42);
    glVertex2i(27,-33);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(40,-43);
    glVertex2i(40,-42);
    glVertex2i(45,-37);
    glVertex2i(45,-38);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(27,-33);
    glVertex2i(40,-42);
    glVertex2i(45,-37);
    glVertex2i(32,-28);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(40,-43);
    glVertex2i(39,-42);
    glVertex2i(39,-49);
    glVertex2i(40,-49);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(45,-38);
    glVertex2i(44,-38);
    glVertex2i(44,-44);
    glVertex2i(45,-44);
    glEnd();
}


void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    bench();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("A bench");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-75,75,-75,75);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}



