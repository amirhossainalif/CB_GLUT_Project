#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void road()
{
    glBegin(GL_POLYGON);
    glColor3ub(112, 123, 124);
    glVertex2i(20,5);
    glVertex2i(-20,5);
    glVertex2i(-20,-5);
    glVertex2i(20,-5);
    glEnd();
}

void car1()
{
    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);
    glVertex2i(4,3);
    glVertex2i(10,3);
    glVertex2i(10,2);
    glVertex2i(4,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);
    glVertex2i(5,3);
    glVertex2i(6,4);
    glVertex2i(8,4);
    glVertex2i(9,3);
    glEnd();

    /////////////////////////////////////////////////////
    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(52, 73, 94);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.85;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+6,y+2 );
    }
    glEnd();

    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(52, 73, 94);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.85;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+8,y+2 );
    }
    glEnd();
}

void car2()
{

    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);
    glVertex2i(-4,-3);
    glVertex2i(-10,-3);
    glVertex2i(-10,-2);
    glVertex2i(-4,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);
    glVertex2i(-5,-2);
    glVertex2i(-6,-1);
    glVertex2i(-8,-1);
    glVertex2i(-9,-2);
    glEnd();


    ///////////////////////////////////

    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(52, 73, 94);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.85;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-6,y-3 );
    }
    glEnd();

    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(52, 73, 94);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.85;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-8,y-3 );
    }
    glEnd();
}

void trafic_light()
{
    glBegin(GL_POLYGON);
    glColor3ub(244, 246, 247);
    glVertex2f(-0.5,5);
    glVertex2f(-0.5,8);
    glVertex2f(0.5,8);
    glVertex2f(0.5,5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(244, 246, 247);
    glVertex2i(-1,8);
    glVertex2f(-1,12);
    glVertex2i(1,12);
    glVertex2i(1,8);
    glEnd();


    ///////////////////////////////////

    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(39, 174, 96);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.50;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y+9);
    }
    glEnd();

    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(244, 208, 63);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.50;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y+10);
    }
    glEnd();

    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(231, 76, 60);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.50;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y+11);
    }
    glEnd();

}


void Cross()
{
    glBegin(GL_POLYGON);
    glColor3ub(244, 246, 247);
    glVertex2i(-2,-5);
    glVertex2i(-2,-3);
    glVertex2i(2,-3);
    glVertex2i(2,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-2,-3);
    glVertex2i(-2,-1);
    glVertex2i(2,-1);
    glVertex2i(2,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(244, 246, 247);
    glVertex2i(-2,-1);
    glVertex2i(-2,1);
    glVertex2i(2,1);
    glVertex2i(2,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-2,1);
    glVertex2i(-2,3);
    glVertex2i(2,3);
    glVertex2i(2,1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(244, 246, 247);
    glVertex2i(-2,3);
    glVertex2i(-2,5);
    glVertex2i(2,5);
    glVertex2i(2,3);
    glEnd();
}

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    Cross();
    car1();
    car2();
    trafic_light();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("the scenario of a traffic signal");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-20,20,-20,20);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

