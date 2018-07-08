#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat rot = 0.0f;
GLfloat posX = 0.0f;
GLfloat posY = 0.0f;
GLfloat speed = 0.15f;

void update(int value)
{
    if(posX > 1.0)
        posX = -1.2f;
    else if(posX < -1.0)
        posX = 1.2f;

    if(posY > 1.0)
        posY = -1.2f;
    else if(posY < -1.0)
        posY = 1.2f;

    glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}
void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
        posY += speed;
        break;
    case 'a':
        posX -= speed;
        break;
    case 's':
        posY -= speed;
        break;
    case 'd':
        posX += speed;
        break;

    case 'j':
        rot += 5.0;
        break;
    case 'l':
        rot -= 5.0;
        break;

    case '+':
        if(speed>= 6.0f)
        {
            speed = 6.0f;
        }
        else
        {
            speed += 0.15f;
        }
        break;
    case '-':
        if(speed<= 1.5f)
        {
            speed = 1.5f;
        }
        else
        {
            speed -= 0.15f;
        }
        break;

        glutPostRedisplay();
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glPushMatrix();
    glRotatef(rot, 0.0, 0.0, 1.0);
    glTranslatef(posX,posY, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(-0.25f, 0.25f);
    glVertex2f(0.25f, 0.25f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(0.1f,  0.4f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.25f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(0.3f,  -0.3f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(209,157,8);
    glVertex2f(0.1f, 0.4f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(0.1f,  -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(-0.3f, -0.45f);
    glVertex2f(0.0f, -0.75f);
    glVertex2f(0.3f, -0.45f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(-0.15f, -0.4f);
    glVertex2f(0.0f, -0.55f);
    glVertex2f(0.15f, -0.4f);
    glEnd();

    glPopMatrix();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Basic Animation");
    glutDisplayFunc(display);
    init();
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}

/*
Faysal Ahmed
15-28335-1
B2
*/
