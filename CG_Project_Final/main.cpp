#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.020f;

float _move = 0.0f;
float _move1=0.0f;
float _move2=0.0f;
float _angle1 = 0.0f;


void dis_N(int i);
void display_Night();
void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void Night_SKY()
{

    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.40);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 1.0f);
    glColor3f(0.0, 0.01, 0.02);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 0.5f);
    glEnd();
}

void Day_Sky()
{
    glBegin(GL_POLYGON);
    glColor3f(0.4f,0.69f,1.0f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}

void Sun()
{
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y+0.8f);
    }
    glEnd();
    glFlush();

}

void moon()
{

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(1.0f,1.0f,1.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.65,y+0.65);
    }
    glEnd();
    glFlush();
}

void Star()
{
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.7f, 0.9f);
    glVertex2f(-0.5f, 0.9f);
    glVertex2f(-0.3f, 0.9f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.3f, 0.9f);
    glVertex2f(0.5f, 0.9f);
    glVertex2f(0.7f, 0.9f);
    glVertex2f(0.9f, 0.9f);
    glVertex2f(-0.98f, 0.93f);
    glVertex2f(-0.88f, 0.94f);
    glVertex2f(-0.68f, 0.91f);
    glVertex2f(-0.55f, 0.92f);
    glVertex2f(-0.45f, 0.93f);
    glVertex2f(-0.25f, 0.94f);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(0.13f, 0.91f);
    glVertex2f(0.25f, 0.92f);
    glVertex2f(0.37f, 0.93f);
    glVertex2f(0.49f, 0.92f);
    glVertex2f(-0.8f, 0.85f);
    glVertex2f(-0.6f, 0.85f);
    glVertex2f(-0.4f, 0.85f);
    glVertex2f(-0.2f, 0.85f);
    glVertex2f(0.0f, 0.85f);
    glVertex2f(0.2f, 0.85f);
    glVertex2f(0.4f, 0.85f);
    glVertex2f(0.6f, 0.85f);
    glVertex2f(0.8f, 0.85f);
    glVertex2f(1.0f, 0.85f);
    glEnd();
}

void Hill_N()
{
    ///hill3/////////////
    glPushMatrix();
    glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.9f, 0.77f);
    glVertex2f(-0.9f, 0.77f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
    glPopMatrix();


    ///hill01//////////
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.09, 0.20, 0.09);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
    glPopMatrix();



    ///hill5////////////////
    glPushMatrix();
    glTranslatef(0.8f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.08, 0.19, 0.08);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();
    glPopMatrix();


    ///hill4//////////////
    glPushMatrix();
    glTranslatef(0.78f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.12, 0.28, 0.12);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
    glPopMatrix();


    ///hill6//////
    glPushMatrix();
    glTranslatef(1.3f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.20, 0.00);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();
    glPopMatrix();

    ///hill2/////////
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.31, 0.13);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();
    glPopMatrix();

    glFlush();
}


void hill_D()
{
    ///hill3/////////
    glPushMatrix();
    glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.9f, 0.77f);
    glVertex2f(-0.9f, 0.77f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
    glPopMatrix();



    ///hill01/////////
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.4f,0.0f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();



    ///hill5////////
    glPushMatrix();
    glTranslatef(0.8f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();
    glPopMatrix();

    ///hill4///////////

    glPushMatrix();
    glTranslatef(0.78f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
    glPopMatrix();

    ///hill6//////
    glPushMatrix();
    glTranslatef(1.3f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();
    glPopMatrix();


    ///hill2/////
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.5f,0.0f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();
    glFlush();
}

void cloud_d_S()
{
    //cloud-1
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    ////////////////////////////////
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.90);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y+0.95);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.55,y+0.95);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y+0.85);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.55,y+0.85);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.50,y+0.90);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y+0.90);
    }
    glEnd();
    glPopMatrix();



    //cloud-2

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    ////////////////////////////////////
    //glPushMatrix();
    glTranslatef(1.0,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.90);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y+0.95);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.55,y+0.95);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y+0.85);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.55,y+0.85);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.50,y+0.90);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.95f,0.95f,0.95f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y+0.90);
    }
    glEnd();
    glPopMatrix();
    glFlush();
}

void cloud_N_S()
{
    //cloud-1
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    ///////////////////////////////////
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5f,0.5f,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.35,y+0.90);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5f,0.5f,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.30,y+0.95);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5f,0.5f,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.25,y+0.95);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5f,0.5f,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.30,y+0.85);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5f,0.5f,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.25,y+0.85);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5f,0.5f,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.20,y+0.90);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5f,0.5f,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.30,y+0.90);
    }
    glEnd();
    glPopMatrix();

    glFlush();
}

void grass()
{
    glBegin(GL_POLYGON);
    glColor3ub(32, 147, 20);
    glVertex2f(-1.0f,0.37f);
    glVertex2f(-1.0f,0.5f);
    glVertex2f(1.0f,0.5f);
    glVertex2f(1.0f,0.37f);
    glEnd();
}

void tree()
{
//    glBegin(GL_POLYGON);
//    glColor3ub(32, 147, 20);
//    glVertex2f(-1.0f,0.37f);
//    glVertex2f(-1.0f,0.5f);
//    glVertex2f(1.0f,0.5f);
//    glVertex2f(1.0f,0.37f);
//    glEnd();

    glPushMatrix();
    glTranslatef(-0.30,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.20,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.10,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.00,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.10,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.30,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.20,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.40,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.50,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.60,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.70,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.80,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.90,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.00,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.10,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.20,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.30,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.40,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.50,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.60,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.70,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.55);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.04;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(60,156,2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.65,y+0.45);
    }
    glEnd();


    glTranslatef(-0.01,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(118,113,21);
    glVertex2f(-0.65f,0.45f);
    glVertex2f(-0.63f,0.45f);
    glVertex2f(-0.63f,0.38f);
    glVertex2f(-0.65f,0.38f);
    glEnd();
    glPopMatrix();

    glFlush();
}

void walking_Road()
{
    glBegin(GL_QUADS);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-1.0f, -0.17f);
    glVertex2f(1.0f, -0.17f);
    glVertex2f(1.0f, -0.12f);
    glVertex2f(-1.0f, -0.12f);


    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-1.0f, 0.37f);
    glVertex2f(1.0f, 0.37f);
    glVertex2f(1.0f, 0.32f);
    glVertex2f(-1.0f, 0.32f);

    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.12f);
    glVertex2f(-1.0f, -0.12f);


    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 0.32f);
    glVertex2f(-1.0f, 0.32f);

    glEnd();
}



void lamp_D()
{
    glPushMatrix();
    glTranslatef(-0.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.30,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.50,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.70,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.90,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.30,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.50,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.70,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.90,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();

/// //////////////////////////////////////////
    glPushMatrix();
    glTranslatef(-0.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.30,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.50,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.70,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.90,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.30,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.50,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.70,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.90,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);


    glEnd();
    glPopMatrix();
    glFlush();
}


void lamp_N()
{
    glPushMatrix();
    glTranslatef(-0.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.30,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.50,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.70,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.90,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.30,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.50,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.70,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.90,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2.10,0,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();

/// ///////////////////////////////////////
    glPushMatrix();
    glTranslatef(-0.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.30,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.50,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.70,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.90,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.30,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.50,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.70,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.90,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(2.10,-0.42,0);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.9025f, 0.41f);
    glVertex2f(-0.8975f, 0.41f);
    glVertex2f(-0.8975f, 0.31f);
    glVertex2f(-0.9025f, 0.31f);

    glColor3f(0.8f,0.9f,1.0f);
    glVertex2f(-0.915f, 0.41f);
    glVertex2f(-0.885f, 0.41f);
    glVertex2f(-0.885f, 0.416f);
    glVertex2f(-0.915f, 0.416f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.413f);
    glVertex2f(-0.885f, 0.413f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.915f, 0.41f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.905f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.95f, 0.22f);

    glColor3f(0.9f,0.9f,0.0f);
    glVertex2f(-0.885f, 0.416f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.895f, 0.22f);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.85f, 0.22f);

    glEnd();
    glPopMatrix();

    glFlush();
}



void Road()
{
    glBegin(GL_QUADS);
    glColor3f(0.2f,0.2f,0.2f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();


/// //////////lane//////////////
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.2f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.2f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.12f);
    glVertex2f(0.05f, 0.12f);
    glVertex2f(0.05f,0.1f);
    glVertex2f(-0.05f,0.1f);
    glEnd();
    glPopMatrix();
    glFlush();

}



void car1()
{
    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(-0.7f, 0.18f);
    glVertex2f(-0.7f, 0.20f);
    glVertex2f(-0.5f, 0.20f);
    glVertex2f(-0.5f, 0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.7,y+0.19);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(-0.7f, 0.20f);
    glVertex2f(-0.67f, 0.25f);
    glVertex2f(-0.55f, 0.25f);
    glVertex2f(-0.5f, 0.20f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.5,y+0.19);
    }
    glEnd();

    /////////////////////////////////
   /// //Window

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(-0.65f, 0.22f);
    glVertex2f(-0.65f, 0.24f);
    glVertex2f(-0.61f, 0.24f);
    glVertex2f(-0.61f, 0.22f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(-0.59f, 0.22f);
    glVertex2f(-0.59f, 0.24f);
    glVertex2f(-0.55f, 0.24f);
    glVertex2f(-0.55f, 0.22f);
    glEnd();


    //////////////////////////////
  ///  //wheel

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.67,y+0.18);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.67,y+0.18);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.53,y+0.18);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.53,y+0.18);
    }
    glEnd();

//////////////////////////////////////////////////////////////
    /// Another car



    glPushMatrix();
    glTranslatef(1.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(-0.7f, 0.18f);
    glVertex2f(-0.7f, 0.20f);
    glVertex2f(-0.5f, 0.20f);
    glVertex2f(-0.5f, 0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.7,y+0.19);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(-0.7f, 0.20f);
    glVertex2f(-0.67f, 0.25f);
    glVertex2f(-0.55f, 0.25f);
    glVertex2f(-0.5f, 0.20f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.5,y+0.19);
    }
    glEnd();

    /////////////////////////////////
    /// //Window

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(-0.65f, 0.22f);
    glVertex2f(-0.65f, 0.24f);
    glVertex2f(-0.61f, 0.24f);
    glVertex2f(-0.61f, 0.22f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(-0.59f, 0.22f);
    glVertex2f(-0.59f, 0.24f);
    glVertex2f(-0.55f, 0.24f);
    glVertex2f(-0.55f, 0.22f);
    glEnd();


    //////////////////////////////
   /// //wheel

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.67,y+0.18);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.67,y+0.18);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.53,y+0.18);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.53,y+0.18);
    }
    glEnd();
    glPopMatrix();


    glFlush();
}

void car2()
{
    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(0.7f, -0.03f);
    glVertex2f(0.7f, -0.01f);
    glVertex2f(0.5f, -0.01f);
    glVertex2f(0.5f, -0.03f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.7,y-0.02);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(0.7f, -0.01f);
    glVertex2f(0.68f, 0.03f);
    glVertex2f(0.55f, 0.03f);
    glVertex2f(0.5f, -0.01f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.5,y-0.02);
    }
    glEnd();

    /////////////////////////////////
   /// //Window

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(0.66f, 0.00f);
    glVertex2f(0.66f, 0.02f);
    glVertex2f(0.62f, 0.02f);
    glVertex2f(0.62f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(0.60f, 0.00f);
    glVertex2f(0.60f, 0.02f);
    glVertex2f(0.56f, 0.02f);
    glVertex2f(0.56f, 0.00f);
    glEnd();


    //////////////////////////////
  ///  //wheel

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.67,y-0.03);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.67,y-0.03);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.54,y-0.03);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.54,y-0.03);
    }
    glEnd();

    //////////////////////////////////////////////////////////////

    /// Another car//////////


    glPushMatrix();
    glTranslatef(-1.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(0.7f, -0.03f);
    glVertex2f(0.7f, -0.01f);
    glVertex2f(0.5f, -0.01f);
    glVertex2f(0.5f, -0.03f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.7,y-0.02);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(119, 119, 119  );
    glVertex2f(0.7f, -0.01f);
    glVertex2f(0.68f, 0.03f);
    glVertex2f(0.55f, 0.03f);
    glVertex2f(0.5f, -0.01f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(119, 119, 119 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.5,y-0.02);
    }
    glEnd();

    /////////////////////////////////
  ///  //Window

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(0.66f, 0.00f);
    glVertex2f(0.66f, 0.02f);
    glVertex2f(0.62f, 0.02f);
    glVertex2f(0.62f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143, 155, 142  );
    glVertex2f(0.60f, 0.00f);
    glVertex2f(0.60f, 0.02f);
    glVertex2f(0.56f, 0.02f);
    glVertex2f(0.56f, 0.00f);
    glEnd();


    //////////////////////////////
  ///  //wheel

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.67,y-0.03);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.67,y-0.03);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(7, 8, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.54,y-0.03);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(95, 97, 95  );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.54,y-0.03);
    }
    glEnd();
    glPopMatrix();
    glFlush();
}

void beach_D()
{
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.71f,0.43f);
    glVertex2f(-1.0f, -0.45f);
    glVertex2f(1.0f, -0.45f);
    glVertex2f(1.0f, -0.17f);
    glVertex2f(-1.0f, -0.17f);
    glEnd();
}

void beach_N()
{
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.51, 0.23);
    glVertex2f(-1.0f, -0.45f);
    glVertex2f(1.0f, -0.45f);
    glVertex2f(1.0f, -0.17f);
    glVertex2f(-1.0f, -0.17f);
    glEnd();
}

void Stone()
{
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();

    glPushMatrix();
    glTranslatef(-0.1f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.05f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.15f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.20f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.25f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.30f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.35f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.40f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.05f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.10f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.15f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.20f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.25f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.30f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.35f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.40f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.45f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.50f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.55f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.60f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.65f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.70f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.75f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.80f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.85f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.90f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.95f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.0f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.05f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.10f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.15f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.20f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.25f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.30f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.35f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.40f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.45f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.50f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.55f,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.1f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.05f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.15f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.20f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.25f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.30f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.35f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.40f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.05f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.10f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.15f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.20f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.25f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.30f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.35f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.40f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.45f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.50f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.55f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.60f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.65f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.70f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.75f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.80f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.85f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.90f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.95f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.0f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.05f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.10f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.15f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.20f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.25f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.30f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.35f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.40f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.45f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.50f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.55f,0.05f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.1f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.05f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.15f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.20f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.25f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.30f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.35f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.40f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.05f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.10f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.15f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.20f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.25f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.30f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.35f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.40f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.45f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.50f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.55f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.60f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.65f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.70f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.75f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.80f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.85f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.90f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.95f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.0f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.05f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.10f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.15f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.20f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.25f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.30f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.35f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.40f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.45f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.50f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.55f,0.1f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.60,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.35);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.58,y-0.33);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(129, 129, 128 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.56,y-0.33);
    }
    glEnd();
    glPopMatrix();
    glFlush();
}


void Water_N()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.09f, 0.4f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();


}


void Water()
{

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.29f,0.6f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();

}

void steamer()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.4f, -0.75f);
    glVertex2f(-0.05f, -0.75f);
    glVertex2f(-0.1f, -0.85f);
    glVertex2f(-0.35f, -0.85f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.35f, -0.75f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.1f, -0.68f);
    glVertex2f(-0.35f, -0.68f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,1.0f,1.0f);
    glVertex2f(-0.32f, -0.72f);
    glVertex2f(-0.28f, -0.72f);
    glVertex2f(-0.28f, -0.7f);
    glVertex2f(-0.32f, -0.7f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,1.0f,1.0f);
    glVertex2f(-0.27f, -0.72f);
    glVertex2f(-0.23f, -0.72f);
    glVertex2f(-0.23f, -0.7f);
    glVertex2f(-0.27f, -0.7f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,1.0f,1.0f);
    glVertex2f(-0.22f, -0.72f);
    glVertex2f(-0.18f, -0.72f);
    glVertex2f(-0.18f, -0.7f);
    glVertex2f(-0.22f, -0.7f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,1.0f,1.0f);
    glVertex2f(-0.17f, -0.72f);
    glVertex2f(-0.13f, -0.72f);
    glVertex2f(-0.13f, -0.7f);
    glVertex2f(-0.17f, -0.7f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.17f, -0.68f);
    glVertex2f(-0.13f, -0.68f);
    glVertex2f(-0.14f, -0.63f);
    glVertex2f(-0.16f, -0.63f);
    glEnd();
}


void display_Night()
{
    glBegin(GL_POLYGON);
    //glColor3f(0,0,0);
    Night_SKY();
    Star();
    moon();
    cloud_N_S();
    Hill_N();
    Water_N();
    beach_N();
    Stone();
    grass();
    //tree();
    walking_Road();
    Road();

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    //glTranslatef(_move1, 0.0f, 0.0f);
    car2();
    glPopMatrix();

    lamp_N();

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    //glTranslatef(_move, 0.0f, 0.0f);
    car1();
    glPopMatrix();

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    // glTranslatef(_move2, 0.0f, 0.0f);
    steamer();
    glPopMatrix();

    glEnd();
    glFlush();

    glutSwapBuffers();
    glutTimerFunc(8000,dis_N,0);
}


void dis_D(int i)
{
    glutDisplayFunc(display_Night);
    //glutPostRedisplay();
}


void display_Day()
{
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Day_Sky();
    Sun();
    cloud_d_S();
    hill_D();
    Water();
    beach_D();
    Stone();
    grass();
    //tree();
    walking_Road();
    Road();

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    // glTranslatef(_move, 0.0f, 0.0f);
    car1();
    glPopMatrix();

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    //glTranslatef(_move1, 0.0f, 0.0f);
    car2();
    glPopMatrix();

    lamp_D();

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    // glTranslatef(_move2, 0.0f, 0.0f);
    steamer();
    glPopMatrix();

    glEnd();
    glFlush();

    glutSwapBuffers();
    //glutTimerFunc(3000,dis_D,0);
    glutTimerFunc(8000,dis_D,0);
}

void dis_N(int i)
{
    glutDisplayFunc(display_Day);
    //glutPostRedisplay();
}
void updateTp(int value)
{

    if(position >1.6)
        position = -1.5f;

    position += speed;

    glutPostRedisplay();


    glutTimerFunc(100, updateTp, 0);
}
void updateTp1(int value)
{

    if(position1 <-1.6)
        position1 = 1.5f;

    position1 -= speed1;

    glutPostRedisplay();


    glutTimerFunc(100, updateTp1, 0);
}
void updateTp2(int value)
{

    if(position2 <-1.0)
        position2 = 1.2f;

    position2 -= speed2;

    glutPostRedisplay();


    glutTimerFunc(100, updateTp2, 0);
}

void update(int value)
{
    _move += .005;
    if(_move > 1.3)
    {
        _move = -1.0;
    }
    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}

void update1(int value)
{
    _move += .005;
    if(_move > 1.3)
    {
        _move = -1.0;
    }
    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}

void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        speed += 0.1f;
        speed1 += 0.1f;
        speed2 += 0.1f;
    }
    if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.1f;
        speed1 -= 0.1f;
        speed2 -= 0.1f;
    }
    glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 's':
        speed = 0.0f;
        speed1 = 0.0f;
        speed2 = 0.0f;
        break;
    case 'w':
        speed = 0.1f;
        speed1 = 0.1f;
        speed2 = 0.020f;
        break;
    case 'd':
        speed += 0.1f;
        speed1 += 0.1f;
        speed2 += 0.1f;
        break;
    case 'a':
        speed -= 0.1f;
        speed1 -= 0.1f;
        speed2 -= 0.1f;
        break;
        glutPostRedisplay();
    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1024,680);
    glutCreateWindow("Marin Drive");
    glutInitWindowPosition(50,40);
    glutDisplayFunc(display_Day);
    glutTimerFunc(100, updateTp, 0);
    glutTimerFunc(100, updateTp1, 0);
    glutTimerFunc(100, updateTp2, 0);
    glutTimerFunc(100, update, 0);



    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutMainLoop();

    return 0;
}
