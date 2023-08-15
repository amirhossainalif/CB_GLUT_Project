#include <windows.h>
#include <GL/glut.h>

void Tree()
{
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(-20,-40);
    glVertex2i(-17,-38);
    glVertex2i(-12,-38);
    glVertex2i(-10,-40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(-17,-38);
    glVertex2i(-16,-36);
    glVertex2i(-13,-36);
    glVertex2i(-12,-38);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(-16,-36);
    glVertex2i(-16,-20);
    glVertex2i(-13,-20);
    glVertex2i(-13,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(-16,-20);
    glVertex2i(-17,-16);
    glVertex2i(-12,-16);
    glVertex2i(-13,-20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(-17,-16);
    glVertex2i(-20,-13);
    glVertex2i(-15,-16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2i(-12,-16);
    glVertex2i(-10,-13);
    glVertex2i(-15,-16);
    glEnd();

    ///////////////////////////////////////////////

    glBegin(GL_POLYGON);
    glColor3ub(60,156,2);
    glVertex2i(-17,-16);
    glVertex2i(-16,-20);
    glVertex2i(-16,-25);
    glVertex2i(-18,-27);
    glVertex2i(-20,-27);
    glVertex2i(-22,-25);
    glVertex2i(-24,-20);
    glVertex2i(-20,-13);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(60,156,2);
    glVertex2i(-20,-13);
    glVertex2i(-24,-20);
    glVertex2i(-28,-19);
    glVertex2i(-30,-17);
    glVertex2i(-31,-16);
    glVertex2i(-32,-15);
    glVertex2i(-31,-13);
    glVertex2i(-30,-10);
    glVertex2i(-28,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(60,156,2);
    glVertex2i(-20,-13);
    glVertex2i(-28,-8);
    glVertex2i(-29,-7);
    glVertex2i(-30,-6);
    glVertex2i(-30,-4);
    glVertex2i(-28,-1);
    glVertex2i(-25,2);
    glVertex2i(-23,2);
    glVertex2i(-20,-1);
    glVertex2i(-10,-13);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(60,156,2);
    glVertex2i(-10,-13);
    glVertex2i(-15,-16);
    glVertex2i(-20,-13);
    glVertex2i(-20,-1);
    glVertex2i(-21,2);
    glVertex2i(-20,4);
    glVertex2i(-18,6);
    glVertex2i(-15,6);
    glVertex2i(-12,2);
    glVertex2i(-13,-1);
    glVertex2i(-10,-13);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(60,156,2);
    glVertex2i(-10,-13);
    glVertex2i(-13,-1);
    glVertex2i(-10,4);
    glVertex2i(-9,5);
    glVertex2i(-7,6);
    glVertex2i(-5,4);
    glVertex2i(-3,2);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(60,156,2);
    glVertex2i(-10,-13);
    glVertex2i(-3,2);
    glVertex2i(-2,-1);
    glVertex2i(1,-3);
    glVertex2i(2,-6);
    glVertex2i(1,-9);
    glVertex2i(-1,-12);
    glVertex2i(-2,-15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(60,156,2);
    glVertex2i(-13,-20);
    glVertex2i(-12,-16);
    glVertex2i(-10,-13);
    glVertex2i(-2,-15);
    glVertex2i(-1,-17);
    glVertex2i(0,-20);
    glVertex2i(-1,-20);
    glVertex2i(-3,-23);
    glVertex2i(-5,-25);
    glVertex2i(-7,-25);
    glVertex2i(-9,-26);
    glVertex2i(-10,-28);
    glVertex2i(-11,-27);
    glVertex2i(-13,-25);
    glEnd();
}


void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Tree();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Tree");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-75,75,-75,75);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


