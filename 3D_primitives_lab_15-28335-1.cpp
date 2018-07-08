#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

//Initializes 3D rendering
void initRendering()
{
    glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;

//Draws the 3D scene
void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspective

    glPushMatrix();
    glColor3ub(5,228,228);
    glTranslated(2.5,0,-9.5);
    glTranslated(0,0.5,0);
    glRotated(60,0,1,0);
    glRotated(_angle,0,1,0);
    glutWireSphere(1,30,30);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(245,90,200);
    glTranslated(.4,0.2,-5);
    glRotated(270,1,0,0);
    glRotated(340,1,0,0);
    glRotated(_angle,0,0,1);
    glutWireCone(0.45,1,30,30);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glTranslated(.4,0.7,-5);
    glRotated(260,1,0,0);
    glRotated(30,1,0,0);
    glRotated(_angle,0,0,1);
    glutWireTorus(0.15,0.4,30,30);
    glPopMatrix();

    glutSwapBuffers();
}

void update(int value)
{
    _angle += 2.0f;
    if (_angle > 360)
    {
        _angle -= 360;
    }

    glutPostRedisplay(); //Tell GLUT that the display has changed

    //Tell GLUT to call update again in 25 milliseconds
    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
{
    //Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200,100);

    //Create the window
    glutCreateWindow("Transformations");

    //Set handler functions
    glutDisplayFunc(drawScene);
    glutReshapeFunc(handleResize);
    glutTimerFunc(25, update, 0); //Add a timer

    glutMainLoop();
    return 0;
}
