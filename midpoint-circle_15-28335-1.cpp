#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

int x_axis, y_axix, rad;

void plot(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x + x_axis, y + y_axix);
    glEnd();
}

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(3.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}

void midPointCircleAlgo()
{
    int x = 0;
    int y = rad;
    float decision = 5/4 - rad;
    plot(x, y);

    while (y > x)
    {
        if (decision < 0)
        {
            x++;
            decision += 2*x+1;
        }
        else
        {
            y--;
            x++;
            decision += 2*(x-y)+1;
        }
        plot(x, y);
        plot(x, -y);
        plot(-x, y);
        plot(-x, -y);
        plot(y, x);
        plot(-y, x);
        plot(y, -x);
        plot(-y, -x);
    }

}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(2.0);

    midPointCircleAlgo();

    glFlush ();
}

int main(int argc, char** argv)
{
    cout << "Enter the coordinates of the center:\n\n" << endl;

    cout << "X-coordinate   : ";
    cin >> x_axis;
    cout << "\nY-coordinate : ";
    cin >> y_axix;
    cout << "\nEnter radius : ";
    cin >> rad;


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (300, 300);
    glutInitWindowPosition (50, 50);
    glutCreateWindow ("Circle using Midpoint Circle Algorithm");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}

/*  Ahmed, Faysal
    ID: 15-28335-1
    Section: B2
*/
