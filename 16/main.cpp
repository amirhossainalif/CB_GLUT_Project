#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float _move = 0.0f;
float _angle1=0.0f;
float _angle2=0.0f;

void wheel()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0,0.2,0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(1.0,1.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.025;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();



}


void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(0.05f,-0.55f);
    glVertex2f(-0.05f,-0.55f);
    glVertex2f(-0.05f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.05f, 0.1f);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(0.0f, 0.2f);
    glEnd();



    glColor3d(1,1,1);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    glTranslatef(0.0,0.2,0);
    glRotatef(_angle2, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.05f);
    glVertex2f(0.35f, 0.05f);
    glVertex2f(0.35f, -0.05f);
    glVertex2f(0.0f, -0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.05f);
    glVertex2f(-0.35f,0.05f);
    glVertex2f(-0.35f,-0.05f);
    glVertex2f(0.0f, -0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.35f);
    glVertex2f(-0.05f, 0.35f);
    glVertex2f(-0.05f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f,-0.35f);
    glVertex2f(-0.05f,-0.35f);
    glVertex2f(-0.05f, 0.0f);
    glEnd();
    wheel();
    glPopMatrix();
    glutSwapBuffers();
}


void update1(int value)
{
    _angle1-=2.0f;
    if(_angle1 > -360.0)
    {
        _angle1+=-360;
    }
    glutPostRedisplay();

    glutTimerFunc(20, update1, 0);
}
void update2(int value)
{
    _angle2-=2.0f;
    if(_angle2 > -360.0)
    {
        _angle2+=-360;
    }
    glutPostRedisplay();

    glutTimerFunc(20, update2, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("a windmill with rotating blades");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-2,2,-2,2);
    glutTimerFunc(20, update2, 0);
    glutMainLoop();
    return 0;
}

