#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glPushMatrix();
    glRotatef(i,0.0,0.0,1.0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.6f, -0.05f);
    glVertex2f( 0.7f,  0.0f);
    glVertex2f(0.6f,  0.05f);
    glEnd();

    glPopMatrix();
    i+=0.1f;

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);
    initGL();
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}
