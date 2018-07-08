#include <GL/gl.h>
#include <GL/glut.h>

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.5);

    glColor3f(0.0, 0.0, 0.0);//White

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.08f, 0.6f);
    glVertex2f(-0.03f, 0.6f);
    glVertex2f(-0.06f, 0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(-0.08f, 0.6f);
    glVertex2f(-0.1f, 0.45f);
    glVertex2f(0.0f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.45f);
    glVertex2f(-0.1f, 0.45f);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(0.0f, -0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(0.0f, -0.65f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.3f, 0.45f);
    glVertex2f(-0.15f, 0.45f);
    glVertex2f(-0.3f, 0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.3f, 0.45f);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.1f, -0.25f);
    glVertex2f(-0.1f, 0.45f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.1f, -0.25f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Batman");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

/*  Ahmed, Faysal
    ID: 15-28335-1
    Section: B2
*/

