#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>

using namespace std;

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

float _angle1 = 30.0f;
float _angle2 = 60.0f;
float _angle3 = 00.0f;
float _angle4 = 90.0f;
float _angle5 = 180.0f;
float _angle6 = 270.0f;
float _angle7 = 120.0f;

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

void DrawCircleLine(float cx, float cy, float r, int num_segments)
{
    glBegin(GL_LINES);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle

        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component
        glVertex2f(x + cx, y + cy);//output vertex
    }
    glEnd();
}

void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    ///Mercury
    glPushMatrix();
    glRotatef(_angle1, 0.0, 0.0, 1.0);
    glTranslatef(0.3, 0.0, 0.0);
    glColor3f(0.184, 0.1098, 0.0902);
    DrawCircle(0.0,0.0,0.015,200);
    glPopMatrix();

    ///Venus
    glPushMatrix();
    glRotatef(_angle2, 0.0, 0.0, 1.0);
    glTranslatef(0.38, 0.0, 0.0);
    glColor3f(0.196, 0.04314,0.03137);
    DrawCircle(0.0,0.0,0.025,200);
    glPopMatrix();

    ///Earth
    glPushMatrix();
    glRotatef(_angle3, 0.0, 0.0, 1.0);
    glTranslatef(0.46, 0.0, 0.0);
    glColor3f(0.4826, 0.6314, 0.77255);
    DrawCircle(0.0,0.0,0.025,200);
    glBegin(GL_POLYGON);
    glPopMatrix();

    ///Mars
    glPushMatrix();
    glRotatef(_angle4, 0.0, 0.0, 1.0);
    glTranslatef(0.54, 0.0, 0.0);
    glColor3f(0.5568, 0.302, 0.102);
    DrawCircle(0.0,0.0,0.015,200);
    glPopMatrix();

    ///Jupiter
    glPushMatrix();
    glRotatef(_angle5, 0.0, 0.0, 1.0);
    glTranslatef(0.62, 0.0, 0.0);
    glColor3f(0.8784, 0.7529, 0.5647);
    DrawCircle(0.0,0.0,0.045,200);
    glPopMatrix();

    ///Saturn
    glPushMatrix();
    glRotatef(_angle6, 0.0, 0.0, 1.0);
    glTranslatef(0.7, 0.0, 0.0);
    glColor3f(0.76078, 0.70196, 0.49019);
    DrawCircle(0.0,0.0,0.025,200);
    glPopMatrix();

    ///Uranus
    glPushMatrix();
    glRotatef(_angle7, 0.0, 0.0, 1.0);
    glTranslatef(0.78, 0.0, 0.0);
    glColor3f(0.192, 0.3922, 0.5412);
    DrawCircle(0.0,0.0,0.035,200);
    glPopMatrix();

    ///Orbits
    glPushMatrix();
    glColor3f(0.5,0.5,0.5);
    DrawCircleLine(0.0,0.0,0.3,200);
    DrawCircleLine(0.0,0.0,0.38,200);
    DrawCircleLine(0.0,0.0,0.46,200);
    DrawCircleLine(0.0,0.0,0.54,200);
    DrawCircleLine(0.0,0.0,0.62,200);
    DrawCircleLine(0.0,0.0,0.70,200);
    DrawCircleLine(0.0,0.0,0.78,200);
    glPopMatrix();

    ///Sun
    glPushMatrix();
    glColor3f(1.0, 0.95, 0.005);
    DrawCircle(0.0,0.0,0.2,200);
    glPopMatrix();

    glutSwapBuffers();
}

void update(int value)
{
    if (_angle1 > 360)
    {
        _angle1 -= 360;
    }
    if (_angle2 > 360)
    {
        _angle2 -= 360;
    }
    if (_angle3 > 360)
    {
        _angle3 -= 360;
    }
    if (_angle4 > 360)
    {
        _angle4 -= 360;
    }
    if (_angle5 > 360)
    {
        _angle5 -= 360;
    }
    if (_angle6 > 360)
    {
        _angle6 -= 360;
    }
    if (_angle7 > 360)
    {
        _angle7 -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

void up1(int value)
{
    _angle1 += 2.0f;
    glutPostRedisplay();
    glutTimerFunc(25, up1, 0);
}

void up2(int value)
{
    _angle2 += 1.15f;
    glutPostRedisplay();
    glutTimerFunc(25, up2, 0);
}

void up3(int value)
{
    _angle3 += 1.3f;
    glutPostRedisplay();
    glutTimerFunc(25, up3, 0);
}

void up4(int value)
{
    _angle4 += 1.45f;
    glutPostRedisplay();
    glutTimerFunc(25, up4, 0);
}

void up5(int value)
{
    _angle5 += 1.6f;
    glutPostRedisplay();
    glutTimerFunc(25, up5, 0);
}

void up6(int value)
{
    _angle6 += 1.35f;
    glutPostRedisplay();
    glutTimerFunc(25, up6, 0);
}

void up7(int value)
{
    _angle7 += 1.15f;
    glutPostRedisplay();
    glutTimerFunc(25, up7, 0);
}

int main(int argc, char** argv)
{
    //Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 750);

    //Create the window
    glutCreateWindow("Transformation");
    initRendering();

    //Set handler functions
    glutDisplayFunc(drawScene);
    glutReshapeFunc(handleResize);

    glutTimerFunc(25, update, 0);
    glutTimerFunc(25, up1, 0);
    glutTimerFunc(25, up2, 0);
    glutTimerFunc(25, up3, 0);
    glutTimerFunc(25, up4, 0);
    glutTimerFunc(25, up5, 0);
    glutTimerFunc(25, up6, 0);
    glutTimerFunc(25, up7, 0);

    glutMainLoop();
    return 0;
}
