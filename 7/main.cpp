#include <windows.h>
#include <GL/glut.h>

void Building()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(4,8,10);
    glVertex2i(-12,30);
    glVertex2i(0,45);
    glVertex2i(12,30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(-10,30);
    glVertex2i(0,42);
    glVertex2i(10,30);
    glVertex2i(10,-40);
    glVertex2i(-10,-40);
    glEnd();
}

void Window_Door()
{

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(-8,28);
    glVertex2i(-4,28);
    glVertex2i(-4,22);
    glVertex2i(-8,22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(-2,28);
    glVertex2i(2,28);
    glVertex2i(2,22);
    glVertex2i(-2,22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(4,28);
    glVertex2i(8,28);
    glVertex2i(8,22);
    glVertex2i(4,22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(8,18);
    glVertex2i(4,18);
    glVertex2i(4,12);
    glVertex2i(8,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(2,18);
    glVertex2i(-2,18);
    glVertex2i(-2,12);
    glVertex2i(2,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(-8,18);
    glVertex2i(-4,18);
    glVertex2i(-4,12);
    glVertex2i(-8,12);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(-8,8);
    glVertex2i(-4,8);
    glVertex2i(-4,2);
    glVertex2i(-8,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(2,8);
    glVertex2i(-2,8);
    glVertex2i(-2,2);
    glVertex2i(2,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(4,8);
    glVertex2i(8,8);
    glVertex2i(8,2);
    glVertex2i(4,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(8,-2);
    glVertex2i(4,-2);
    glVertex2i(4,-8);
    glVertex2i(8,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(2,-2);
    glVertex2i(-2,-2);
    glVertex2i(-2,-8);
    glVertex2i(2,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(-8,-2);
    glVertex2i(-4,-2);
    glVertex2i(-4,-8);
    glVertex2i(-8,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(-8,-12);
    glVertex2i(-4,-12);
    glVertex2i(-4,-18);
    glVertex2i(-8,-18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(-2,-12);
    glVertex2i(2,-12);
    glVertex2i(2,-18);
    glVertex2i(-2,-18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(8,-12);
    glVertex2i(4,-12);
    glVertex2i(4,-18);
    glVertex2i(8,-18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212,208,155);
    glVertex2i(3,-37);
    glVertex2i(-3,-37);
    glVertex2i(-3,-22);
    glVertex2i(3,-22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(164,167,8);
    glVertex2i(4,-39);
    glVertex2i(-4,-39);
    glVertex2i(-4,-38);
    glVertex2i(4,-38);
    glEnd();
}

void display()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Building();
    Window_Door();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("five storied building with windows and a front door");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-75,75,-75,75);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


