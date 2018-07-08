#include <windows.h>
#include <GL/glut.h>
#include <iostream>
#include <math.h>
using namespace std;

GLint segment = 500;
GLfloat i = 0.0f;
GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLint refresh = 1000;

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void Timer(int val)
{
    glutPostRedisplay();
    glutTimerFunc(refresh, Timer, 0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(0.0f, 0.0f, 1.0f);

    //Circle
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    for(int p = 0; p < segment; p++)
    {
        float theta = 2.0f * 3.1415926f * float(p) / float(segment);

        float x = 0.85 * cosf(theta);
        float y = 0.85 * sinf(theta);

        glVertex2f(x, y);
    }
    glEnd();

    //Marks
    glBegin(GL_QUADS);
    glVertex2d(-0.035,0.85);
    glVertex2d(-0.035,0.75);
    glVertex2d(0.035,0.75);
    glVertex2d(0.035,0.85);

    glBegin(GL_QUADS);
    glVertex2d(-0.035,-0.75);
    glVertex2d(-0.035,-0.85);
    glVertex2d(0.035,-0.85);
    glVertex2d(0.035,-0.75);

    glBegin(GL_QUADS);
    glVertex2d(-0.75,0.035);
    glVertex2d(-0.85,0.035);
    glVertex2d(-0.85,-0.035);
    glVertex2d(-0.75,-0.035);

    glBegin(GL_QUADS);
    glVertex2d(0.85,0.035);
    glVertex2d(0.75,0.035);
    glVertex2d(0.75,-0.035);
    glVertex2d(0.85,-0.035);

    glEnd();

    //Inner clock
    //Second
    glPushMatrix();
    glRotatef(i,0.0,0.0,1.0);
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.015f, 0.7f);
    glVertex2f( 0.0f,  0.75f);
    glVertex2f(0.015f, 0.7f);
    glEnd();
    glPopMatrix();
    i-=6.0f;

    if(i>360.0)
    {
        j -= 6.0;
        i = 0.0;
    }
    cout<<i<<" "<<j<<endl;
    //Minute
    glPushMatrix();
    glRotatef(j,0.0,0.0,1.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.8,0.9);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.035f, 0.65f);
    glVertex2f( 0.0f,  0.7f);
    glVertex2f(0.035f, 0.65f);
    glEnd();
    glPopMatrix();

    if(j>360.0)
    {
        k -= 30.0;
        j = 0.0;
    }
    //Hour
    glPushMatrix();
    glRotatef(k,0.0,0.0,1.0);
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.045f, 0.35f);
    glVertex2f( 0.0f, 0.45f);
    glVertex2f(0.045f, 0.35f);
    glEnd();
    glPopMatrix();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);
    initGL();
    glutTimerFunc(0,Timer,0);
    glutMainLoop();
    return 0;
}

/*
Ahmed, Faysal
15-28335-1
B2
*/
