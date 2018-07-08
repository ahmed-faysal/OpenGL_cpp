#include <GL/gl.h>
#include <GL/glut.h>


void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); //white
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);

    float Right = -1.0, Below = 1.0, Change = 0.25;

    for(int k=1; k<=2; k++)
    {
        for(int i=1; i<5; i++)
        {
            for(int j=1; j<5; j++) //This loop draws white boxes horizontally
            {
                glBegin(GL_QUADS);
                glVertex2f(Right, Below);
                glVertex2f(Right, Below-Change);
                glVertex2f(Right+Change, Below-Change);
                glVertex2f(Right+Change, Below);
                glEnd();

                Right += 0.5;
            }

            Right = -1.0;
            if(k==2){
                Right = -0.75;
            }
            Below -= 0.50;
        }
        Right = -0.75;
        Below = 0.75;
    }
    glFlush();
}

    int main(int argc, char** argv)
    {
        glutInit(&argc, argv);
        glutCreateWindow("Chess Board");
        glutInitWindowSize(800, 800);
        glutDisplayFunc(display);

        glutMainLoop();
        return 0;
    }

/*  Ahmed, Faysal
    ID: 15-28335-1
    Section: B2
*/
