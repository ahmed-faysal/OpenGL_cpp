#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
using namespace std;

GLfloat SposX = 0.0f;
GLfloat CposX = 0.0f;
GLfloat Sspeed = 0.2f;

void Supdate(int value)
{
    if(SposX > 1.5)
        SposX = -1.2f;
    else if(SposX < -1.5)
        SposX = 1.2f;

    SposX += Sspeed;

    glutPostRedisplay();

    glutTimerFunc(100, Supdate, 0);
}

void Cupdate(int value)
{
    if(CposX > 1.5)
        CposX = -1.1f;

    CposX += 0.1f;
    glutPostRedisplay();

    glutTimerFunc(50, Cupdate, 0);
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
        SposX -= Sspeed;
        break;

    case 'd':
        SposX += Sspeed;
        break;

    case 'r':
        Sspeed = -Sspeed;
        break;

    case '+':
        if(Sspeed >= 0.6f)
        {
            Sspeed = 0.6f;
        }
        else
        {
            Sspeed += 0.05f;
        }
        break;

    case '-':
        if(Sspeed<= 0.05f)
        {
            Sspeed = 0.05f;
        }
        else
        {
            Sspeed -= 0.05f;
        }
        break;

        glutPostRedisplay();
    }
}

void DrawCircle(float cx, float cy, float r, int num_segments)
{
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle

        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component
        glVertex2f(x + cx, y + cy);//output vertex
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_QUADS);//SKY
    glColor3f(0.529, 0.808, 0.980);
    glVertex2f(-1.0f, 0.2f);
    glColor3f(0.529, 0.808, 0.980);
    glVertex2f(1.0f, 0.2f);
    glColor3f(0.118, 0.565, 1.00);
    glVertex2f(1.0f, 1.0f);
    glColor3f(0.118, 0.565, 1.00);
    glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_QUADS);//Land
    glColor3ub(75,50,5);
    glVertex2f(-1.0f, 0.19f);
    glVertex2f( 1.0f, 0.19f);
    glVertex2f( 1.0f, 0.21f);
    glVertex2f(-1.0f, 0.21f);
    glEnd();

    glPushMatrix();//cloud
    glTranslatef(CposX,0.0f,0.0f);
    glColor3f(0.8, 0.8, 0.8);
    DrawCircle(-0.44, 0.88, .05, 300);
    DrawCircle(-0.47, 0.91, .05, 300);
    DrawCircle(-0.50, 0.83, .05, 300);
    DrawCircle(-0.52, 0.89, .05, 300);
    DrawCircle(-0.55, 0.86, .05, 300);
    DrawCircle(-0.64, 0.85, .05, 300);
    DrawCircle(-0.7, 0.8, .05, 300);
    DrawCircle(-0.72, 0.86, .05, 300);
    DrawCircle(-0.75, 0.83, .05, 300);
    glPopMatrix();

    glBegin(GL_QUADS);//Sea
    glColor3f(0.000, 0.000, 0.804);
    glVertex2f(-1.0f, -1.0f);
    glColor3f(0.000, 0.000, 0.804);
    glVertex2f(1.0f, -1.0f);
    glColor3f(0.529, 0.808, 0.980);
    glVertex2f(1.0f, 0.2f);
    glColor3f(0.529, 0.808, 0.980);
    glVertex2f(-1.0f, 0.2f);
    glEnd();

    glPushMatrix(); //Ship
    glTranslatef(SposX,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.225,-0.575);
    glVertex2f(0.15,-0.575);
    glVertex2f(0.15,-0.4);
    glVertex2f(-0.25,-0.4);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.15,-0.4);
    glVertex2f(0.15,-0.575);
    glVertex2f(0.3,-0.4);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.25,-0.4);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.225,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2f(-0.225,-0.4);
    glVertex2f(0.15,-0.4);
    glVertex2f(0.12,-0.3);
    glVertex2f(-0.22,-0.3);
    glEnd();

    glColor3ub(100,200,200);
    glBegin(GL_QUADS);
    glVertex2f(-0.205,-0.380);
    glVertex2f(-0.11,-0.380);
    glVertex2f(-0.11,-0.32);
    glVertex2f(-0.205,-0.32);

    glBegin(GL_QUADS);
    glVertex2f(-0.1,-0.380);
    glVertex2f(0.0,-0.380);
    glVertex2f(0.0,-0.32);
    glVertex2f(-0.1,-0.32);

    glBegin(GL_QUADS);
    glVertex2f(0.01,-0.380);
    glVertex2f(0.13,-0.380);
    glVertex2f(0.11,-0.32);
    glVertex2f(0.01,-0.32);
    glEnd();
    glPopMatrix();

    cout<<Sspeed<<endl;

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Ship n Bird");
    glutDisplayFunc(display);
    init();
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, Supdate, 0);
    glutTimerFunc(100, Cupdate, 0);
    glutMainLoop();
    return 0;
}

/*
Ahmed,Faysal
15-28335-1
B2
*/
