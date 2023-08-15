#include <windows.h>
#include <GL/glut.h>

void lamppost()
{
    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(15,-40);
    glVertex2i(25,-40);
    glVertex2i(23,-37);
    glVertex2i(17,-37);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(19,-37);
    glVertex2i(21,-37);
    glVertex2i(21,-30);
    glVertex2i(19,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(25,-30);
    glVertex2i(15,-30);
    glVertex2i(15,-27);
    glVertex2i(25,-27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(19,-27);
    glVertex2i(21,-27);
    glVertex2i(21,-10);
    glVertex2i(19,-10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(22,-10);
    glVertex2i(22,-8);
    glVertex2i(18,-8);
    glVertex2i(18,-10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(19,-8);
    glVertex2i(21,-8);
    glVertex2i(21,-3);
    glVertex2i(19,-3);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(25,-3);
    glVertex2i(15,-3);
    glVertex2i(15,-1);
    glVertex2i(25,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(217,247,0);
    glVertex2i(22,-1);
    glVertex2i(25,5);
    glVertex2i(15,5);
    glVertex2i(18,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224,255,0);
    glVertex2i(15,5);
    glVertex2i(14,8);
    glVertex2i(26,8);
    glVertex2i(25,5);
    glEnd();

}


void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    lamppost();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("a lamppost with black background");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-75,75,-75,75);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}



