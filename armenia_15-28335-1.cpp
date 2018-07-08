#include <GL/gl.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

      glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(1.0f, 0.33f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(-1.0f, 0.33f);
        glEnd();

       glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(1.0f, -0.33f);
        glVertex2f(1.0f, 0.33f);
        glVertex2f(-1.0f, 0.33f);
        glVertex2f(-1.0f, -0.33f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, -0.33f);
        glVertex2f(-1.0f, -0.33f);
        glVertex2f(-1.0f, -1.0f);
        glEnd();

	glFlush();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Armenia Flag");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

/*  Ahmed, Faysal
    ID: 15-28335-1
    Section: B2
*/
