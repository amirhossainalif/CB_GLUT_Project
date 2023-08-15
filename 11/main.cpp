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


void lamppost()
{
    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(15,-40);
    glVertex2i(25,-40);
    glVertex2i(23,-39);
    glVertex2i(17,-39);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(21,-39);
    glVertex2i(19,-39);
    glVertex2i(19,-37);
    glVertex2i(21,-37);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(25,-37);
    glVertex2i(15,-37);
    glVertex2i(15,-36);
    glVertex2i(25,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(19,-36);
    glVertex2i(21,-36);
    glVertex2i(21,-30);
    glVertex2i(19,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(22,-30);
    glVertex2i(22,-28);
    glVertex2i(18,-28);
    glVertex2i(18,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(19,-28);
    glVertex2i(21,-28);
    glVertex2i(21,-25);
    glVertex2i(19,-25);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(34,100,9);
    glVertex2i(25,-25);
    glVertex2i(15,-25);
    glVertex2i(15,-23);
    glVertex2i(25,-23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(217,247,0);
    glVertex2i(22,-23);
    glVertex2i(25,-19);
    glVertex2i(15,-19);
    glVertex2i(18,-23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224,255,0);
    glVertex2i(15,-19);
    glVertex2i(14,-14);
    glVertex2i(26,-14);
    glVertex2i(25,-19);
    glEnd();

}

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
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Building();
    Window_Door();
    Tree();
    lamppost();
    bench();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("building, tree, lamppost and bench");
    glutInitWindowSize(520, 520);
    gluOrtho2D(-75,75,-75,75);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


