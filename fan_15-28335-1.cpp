#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

GLint segment = 500;
GLfloat i = 0.0f;
GLint refresh = 15;

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void Keyboard(unsigned char key, int x, int y)
{
    if(key == '-')
    {
        if(refresh >= 15)
        {
            refresh = 15;
        }
        else
        {
            refresh += 2;
        }
    }
    else if(key == '+')
    {
        if(refresh <= 1)
        {
            refresh = 1;
        }
        else
        {
            refresh -= 2;
        }
    }
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

    //Circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.6f, 0.6f, 0.6f);
    for(int p = 0; p < segment; p++)
    {
        float theta = 2.0f * 3.1415926f * float(p) / float(segment);

        float x = 0.15 * cosf(theta);
        float y = 0.15 * sinf(theta);

        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    for(int p = 0; p < segment; p++)
    {
        float theta = 2.0f * 3.1415926f * float(p) / float(segment);

        float x = 0.135 * cosf(theta);
        float y = 0.135 * sinf(theta);

        glVertex2f(x, y);
    }
    glEnd();
    //Circle End

    //Wings
    //First wing start
    glPushMatrix();
    glRotatef(i,0.0,0.0,1.0);
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.120f, 0.165f);
    glVertex2f(0.120f, 0.165f);
    glVertex2f(0.08f,  0.8f);
    glVertex2f(-0.08f, 0.8f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.08f, 0.165f);
    glVertex2f(0.08f, 0.165f);
    glVertex2f(0.04f,  0.8f);
    glVertex2f(-0.04f, 0.8f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.03f, 0.145f);
    glVertex2f(0.03f, 0.145f);
    glVertex2f(0.03f,  0.17f);
    glVertex2f(-0.03f, 0.17f);
    glEnd();
    glPopMatrix();
    //First wing end

    //Second wing start
    glPushMatrix();
    glRotatef(120.0+i,0.0,0.0,1.0);
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.120f, 0.165f);
    glVertex2f(0.120f, 0.165f);
    glVertex2f(0.08f,  0.8f);
    glVertex2f(-0.08f, 0.8f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.08f, 0.165f);
    glVertex2f(0.08f, 0.165f);
    glVertex2f(0.04f,  0.8f);
    glVertex2f(-0.04f, 0.8f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.03f, 0.145f);
    glVertex2f(0.03f, 0.145f);
    glVertex2f(0.03f,  0.17f);
    glVertex2f(-0.03f, 0.17f);
    glEnd();
    glPopMatrix();
    //Second wing end

    //Third wing start
    glPushMatrix();
    glRotatef(240.0+i,0.0,0.0,1.0);
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.120f, 0.165f);
    glVertex2f(0.120f, 0.165f);
    glVertex2f(0.08f,  0.8f);
    glVertex2f(-0.08f, 0.8f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.08f, 0.165f);
    glVertex2f(0.08f, 0.165f);
    glVertex2f(0.04f,  0.8f);
    glVertex2f(-0.04f, 0.8f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.03f, 0.145f);
    glVertex2f(0.03f, 0.145f);
    glVertex2f(0.03f,  0.17f);
    glVertex2f(-0.03f, 0.17f);
    glEnd();
    glPopMatrix();
    //Third wing end

    i+=5.0f;

    cout << refresh <<endl;
    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(450, 450);
    glutCreateWindow("Anti-Clock Fan");
    glutDisplayFunc(display);
    initGL();
    glutTimerFunc(0,Timer,0);
    glutKeyboardFunc(Keyboard);
    glutMainLoop();
    return 0;
}

/*
3 Wing Fan
Ahmed, Faysal
15-28335-1
B2
*/
