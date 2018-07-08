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

    //Left
    glBegin(GL_QUADS);
    glColor3ub(20,25,195);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(-0.05f, 0.6f);
    glVertex2f(-0.05f, 0.4f);

    glBegin(GL_QUADS);
    glColor3ub(7,10,102);
    glVertex2f(-0.05f, 0.4f);
    glVertex2f(-0.05f, 0.7f);
    glVertex2f(-0.15f, 0.7f);
    glVertex2f(-0.15f, 0.4f);

    glBegin(GL_QUADS);
    glColor3ub(219,170,45);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(-0.05f, 0.4f);
    glVertex2f(-0.05f, 0.3f);

    glBegin(GL_QUADS);
    glColor3ub(164,118,4);
    glVertex2f(-0.05f, 0.3f);
    glVertex2f(-0.05f, 0.4f);
    glVertex2f(-0.15f, 0.4f);
    glVertex2f(-0.15f, 0.3f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.25f, 0.3f);
    glVertex2f(-0.25f, 0.2f);

    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.15f, 0.1f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.35f, 0.2f);
    glVertex2f(-0.35f, 0.1f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(-0.25f, 0.1f);
    glVertex2f(-0.25f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(-0.25f, 0.1f);
    glVertex2f(-0.35f, 0.1f);
    glVertex2f(-0.35f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(240,250,7);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(-0.25f, -0.1f);
    glVertex2f(0.0f, -0.1f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 1.0);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(-0.35f, 0.0f);
    glVertex2f(-0.35f, -0.1f);
    glVertex2f(-0.25f, -0.1f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 1.0);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(-0.15f, -0.1f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(0.0f, -0.3f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(-0.05f, -0.3f);
    glVertex2f(-0.05f, -0.4f);
    glVertex2f(0.0f, -0.4f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 1.0);
    glVertex2f(-0.15f, -0.1f);
    glVertex2f(-0.25f, -0.1f);
    glVertex2f(-0.25f, -0.2f);
    glVertex2f(-0.15f, -0.2f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(-0.05f, -0.3f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.15f, -0.5f);
    glVertex2f(-0.05f, -0.5f);

    glBegin(GL_QUADS);
    glColor3ub(67,66,62);
    glVertex2f(-0.15f, -0.2f);
    glVertex2f(-0.25f, -0.2f);
    glVertex2f(-0.25f, -0.5f);
    glVertex2f(-0.15f, -0.5f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0);
    glVertex2f(-0.25f, -0.1f);
    glVertex2f(-0.35f, -0.1f);
    glVertex2f(-0.35f, -0.4f);
    glVertex2f(-0.25f, -0.4f);

    glBegin(GL_QUADS);
    glColor3ub(20,25,195);
    glVertex2f(-0.05f, -0.5f);
    glVertex2f(-0.15f, -0.5f);
    glVertex2f(-0.15f, -0.6f);
    glVertex2f(-0.05f, -0.6f);

    glBegin(GL_QUADS);
    glColor3ub(7,10,102);
    glVertex2f(-0.15f, -0.5f);
    glVertex2f(-0.25f, -0.5f);
    glVertex2f(-0.25f, -0.6f);
    glVertex2f(-0.15f, -0.6f);

    //Right

    glBegin(GL_QUADS);
    glColor3ub(20,25,195);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.05f, 0.4f);
    glVertex2f(0.05f, 0.6f);

    glBegin(GL_QUADS);
    glColor3ub(20,25,195);
    glVertex2f(0.05f, 0.7f);
    glVertex2f(0.05f, 0.4f);
    glVertex2f(0.15f, 0.4f);
    glVertex2f(0.15f, 0.7f);

    glBegin(GL_QUADS);
    glColor3ub(219,170,45);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.05f, 0.3f);
    glVertex2f(0.05f, 0.4f);

    glBegin(GL_QUADS);
    glColor3ub(219,170,45);
    glVertex2f(0.05f, 0.4f);
    glVertex2f(0.05f, 0.3f);
    glVertex2f(0.15f, 0.3f);
    glVertex2f(0.15f, 0.4f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.25f, 0.2f);
    glVertex2f(0.25f, 0.3f);

    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.15f, 0.1f);
    glVertex2f(0.15f, 0.2f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.15f, 0.1f);
    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.35f, 0.2f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.25f, 0.1f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.25f, 0.1f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.35f, 0.0f);
    glVertex2f(0.35f, 0.1f);

    glBegin(GL_QUADS);
    glColor3ub(240,250,7);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.25f, -0.1f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 1.0);
    glVertex2f(0.35f, 0.0f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.25f, -0.1f);
    glVertex2f(0.35f, -0.1f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 1.0);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.15f, -0.3f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.0f, -0.4f);
    glVertex2f(0.05f, -0.4f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 1.0);
    glVertex2f(0.25f, -0.1f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.15f, -0.2f);
    glVertex2f(0.25f, -0.2f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.05f, -0.5f);
    glVertex2f(0.15f, -0.5f);

    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);
    glVertex2f(0.25f, -0.2f);
    glVertex2f(0.15f, -0.2f);
    glVertex2f(0.15f, -0.5f);
    glVertex2f(0.25f, -0.5f);

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0);
    glVertex2f(0.35f, -0.1f);
    glVertex2f(0.25f, -0.1f);
    glVertex2f(0.25f, -0.4f);
    glVertex2f(0.35f, -0.4f);

    glBegin(GL_QUADS);
    glColor3ub(20,25,195);
    glVertex2f(0.15f, -0.5f);
    glVertex2f(0.05f, -0.5f);
    glVertex2f(0.05f, -0.6f);
    glVertex2f(0.15f, -0.6f);

    glBegin(GL_QUADS);
    glColor3ub(20,25,195);
    glVertex2f(0.25f, -0.5f);
    glVertex2f(0.15f, -0.5f);
    glVertex2f(0.15f, -0.6f);
    glVertex2f(0.25f, -0.6f);

    glEnd();
    glFlush ();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (300, 300);
    glutInitWindowPosition (50, 50);
    glutCreateWindow ("Lego Batman");
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}

/*  Ahmed, Faysal
    ID: 15-28335-1
    Section: B2
*/
