#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    ////Head

    glBegin(GL_QUADS);
    glColor3ub(242,216,141);
    glVertex2f(-0.125,0.45);
    glVertex2f(0.125,0.45);
    glVertex2f(0.125,0.85);
    glVertex2f(-0.125,0.85);

    glBegin(GL_QUADS);
    glColor3ub(242,216,141);
    glVertex2f(-0.125,0.55);
    glVertex2f(-0.125,0.85);
    glVertex2f(-0.25,0.85);
    glVertex2f(-0.25,0.55);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.325,0.775);
    glVertex2f(-0.325,0.7);
    glVertex2f(-0.25,0.7);
    glVertex2f(-0.25,0.775);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.25,0.775);
    glVertex2f(-0.25,0.75);
    glVertex2f(-0.2,0.75);
    glVertex2f(-0.2,0.775);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.2,0.775);
    glVertex2f(-0.2,0.7);
    glVertex2f(-0.1,0.7);
    glVertex2f(-0.1,0.775);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.3,0.95);
    glVertex2f(-0.1,0.95);
    glVertex2f(-0.1,1.0);
    glVertex2f(-0.3,1.0);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.3,0.825);
    glVertex2f(0.175,0.825);
    glVertex2f(0.175,0.95);
    glVertex2f(-0.3,0.95);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.025,0.825);
    glVertex2f(-0.025,0.775);
    glVertex2f(0.175,0.775);
    glVertex2f(0.175,0.825);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.025,0.775);
    glVertex2f(-0.025,0.6);
    glVertex2f(0.025,0.6);
    glVertex2f(0.025,0.775);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.075,0.775);
    glVertex2f(0.075,0.7);
    glVertex2f(0.175,0.7);
    glVertex2f(0.175,0.775);

    ////////Left
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.125,0.5);
    glVertex2f(-0.125,0.55);
    glVertex2f(-0.2,0.55);
    glVertex2f(-0.2,0.5);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.125,0.4);
    glVertex2f(-0.125,0.5);
    glVertex2f(-0.275,0.5);
    glVertex2f(-0.275,0.4);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.075,0.35);
    glVertex2f(-0.075,0.4);
    glVertex2f(-0.275,0.4);
    glVertex2f(-0.275,0.35);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.025,0.05);
    glVertex2f(-0.025,0.35);
    glVertex2f(-0.275,0.35);
    glVertex2f(-0.275,0.05);

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.3);
    glVertex2f(-0.025,0.3);
    glVertex2f(-0.025,0.0);

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.2,0.05);
    glVertex2f(-0.2,0.0);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.2,0.0);
    glVertex2f(-0.2,-0.075);
    glVertex2f(-0.0,-0.075);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.0,-0.075);
    glVertex2f(-0.15,-0.075);
    glVertex2f(-0.15,-0.115);
    glVertex2f(-0.0,-0.115);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.2,0.05);
    glVertex2f(-0.275,0.05);
    glVertex2f(-0.275,-0.115);
    glVertex2f(-0.2,-0.115);

    glBegin(GL_QUADS);
    glColor3ub(242,216,141);
    glVertex2f(-0.15,-0.075);
    glVertex2f(-0.275,-0.075);
    glVertex2f(-0.275,-0.115);
    glVertex2f(-0.15,-0.115);

    glBegin(GL_QUADS);
    glColor3ub(242,216,141);
    glVertex2f(-0.2,-0.115);
    glVertex2f(-0.275,-0.115);
    glVertex2f(-0.275,-0.165);
    glVertex2f(-0.2,-0.165);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-0.06,-0.115);
    glVertex2f(-0.2,-0.115);
    glVertex2f(-0.2,-0.55);
    glVertex2f(-0.06,-0.55);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.5);
    glVertex2f(-0.06,-0.55);
    glVertex2f(-0.2,-0.55);
    glVertex2f(-0.2,-0.625);
    glVertex2f(-0.06,-0.625);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.06,-0.625);
    glVertex2f(-0.2,-0.625);
    glVertex2f(-0.2,-0.775);
    glVertex2f(-0.06,-0.775);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.2,-0.7);
    glVertex2f(-0.3,-0.7);
    glVertex2f(-0.3,-0.775);
    glVertex2f(-0.2,-0.775);

    ////////// Right

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.125,0.55);
    glVertex2f(0.125,0.5);
    glVertex2f(0.2,0.5);
    glVertex2f(0.2,0.55);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.125,0.5);
    glVertex2f(0.125,0.4);
    glVertex2f(0.275,0.4);
    glVertex2f(0.275,0.5);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.075,0.4);
    glVertex2f(0.075,0.35);
    glVertex2f(0.275,0.35);
    glVertex2f(0.275,0.4);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.025,0.35);
    glVertex2f(0.025,0.05);
    glVertex2f(0.275,0.05);
    glVertex2f(0.275,0.35);

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(0.0,0.3);
    glVertex2f(0.0,0.0);
    glVertex2f(0.025,0.0);
    glVertex2f(0.025,0.3);

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(0.0,0.05);
    glVertex2f(0.0,0.0);
    glVertex2f(0.2,0.0);
    glVertex2f(0.2,0.05);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.2,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,-0.075);
    glVertex2f(0.2,-0.075);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.15,-0.075);
    glVertex2f(0.0,-0.075);
    glVertex2f(0.0,-0.115);
    glVertex2f(0.15,-0.115);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.275,0.05);
    glVertex2f(0.2,0.05);
    glVertex2f(0.2,-0.115);
    glVertex2f(0.275,-0.115);

    glBegin(GL_QUADS);
    glColor3ub(242,216,141);
    glVertex2f(0.275,-0.075);
    glVertex2f(0.15,-0.075);
    glVertex2f(0.15,-0.115);
    glVertex2f(0.275,-0.115);

    glBegin(GL_QUADS);
    glColor3ub(242,216,141);
    glVertex2f(0.275,-0.115);
    glVertex2f(0.2,-0.115);
    glVertex2f(0.2,-0.165);
    glVertex2f(0.275,-0.165);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.2,-0.115);
    glVertex2f(0.06,-0.115);
    glVertex2f(0.06,-0.55);
    glVertex2f(0.2,-0.55);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.5);
    glVertex2f(0.2,-0.55);
    glVertex2f(0.06,-0.55);
    glVertex2f(0.06,-0.625);
    glVertex2f(0.2,-0.625);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.2,-0.625);
    glVertex2f(0.06,-0.625);
    glVertex2f(0.06,-0.775);
    glVertex2f(0.2,-0.775);

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.3,-0.7);
    glVertex2f(0.2,-0.7);
    glVertex2f(0.2,-0.775);
    glVertex2f(0.3,-0.775);

    glEnd();
    glFlush ();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (300, 300);
    glutInitWindowPosition (50, 50);
    glutCreateWindow ("Lego Man");
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}

/*  Ahmed, Faysal
    ID: 15-28335-1
    Section: B2
*/
