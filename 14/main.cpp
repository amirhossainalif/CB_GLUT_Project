#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float _angle1 = 0.0f;

void carBody()
{
    glColor3d(1,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.6f, 0.0f);
    glVertex2f(0.6f, 0.1f);
    glVertex2f(0.0f, 0.1f);
    glEnd();

    glColor3d(1,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.45f, 0.2f);
    glVertex2f(0.5f, 0.1f);
    glEnd();
}
void wheel()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.35f, 0.0f, 0.0f);
    glTranslatef(0.5,0,0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        glColor3ub(244, 246, 247 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.07;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.15f, 0.0f, 0.0f);
    glTranslatef(0.3,0,0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        glColor3ub(244, 246, 247 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.07;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}
void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    carBody();
    glPopMatrix();
    wheel();
    glutSwapBuffers();
}

void update2(int value)
{
    _angle1+=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update2, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("a car which will have rotating wheels");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-2,2,-2,2);
    glutTimerFunc(20, update2, 0);
    glutMainLoop();
    return 0;
}

