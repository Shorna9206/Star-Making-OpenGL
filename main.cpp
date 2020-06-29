#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/


//Line01

glColor3f(0,0,1);
    glBegin(GL_LINES);
        glVertex2f(0,.5);
        glVertex2f(1,.5);
            glEnd();


//Line02

glColor3f(0,0,1);
    glBegin(GL_LINES);
        glVertex2f(.5,0);
        glVertex2f(.5,1);
            glEnd();


//white star
glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(.6,.45);
        glVertex2f(.7,.45);
        glVertex2f(.7,.55);
        glVertex2f(.6,.55);

            glEnd();

glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
        glVertex2f(.7,.45);
        glVertex2f(.8,.5);
        glVertex2f(.7,.55);

            glEnd();

glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
        glVertex2f(.7,.55);
        glVertex2f(.65,.65);
        glVertex2f(.6,.55);

            glEnd();

glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
        glVertex2f(.6,.45);
        glVertex2f(.6,.55);
        glVertex2f(.5,.5);

            glEnd();

glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
        glVertex2f(.6,.45);
        glVertex2f(.7,.45);
        glVertex2f(.65,.35);

            glEnd();



//green star
glColor3f(0,1,0);
    glBegin(GL_POLYGON);
        glVertex2f(.4,.45);
        glVertex2f(.3,.45);
        glVertex2f(.3,.55);
        glVertex2f(.4,.55);

            glEnd();

glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.3,.45);
        glVertex2f(.3,.55);
        glVertex2f(.2,.5);

            glEnd();

glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.3,.55);
        glVertex2f(.4,.55);
        glVertex2f(.35,.65);

            glEnd();

glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.4,.45);
        glVertex2f(.4,.55);
        glVertex2f(.5,.5);

            glEnd();

glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.4,.45);
        glVertex2f(.3,.45);
        glVertex2f(.35,.35);

            glEnd();


//Yello star
glColor3f(1,1,0);
    glBegin(GL_POLYGON);
        glVertex2f(.45,.6);
        glVertex2f(.55,.6);
        glVertex2f(.55,.7);
        glVertex2f(.45,.7);

            glEnd();

glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.45,.6);
        glVertex2f(.55,.6);
        glVertex2f(.5,.5);

            glEnd();

glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.55,.6);
        glVertex2f(.55,.7);
        glVertex2f(.65,.65);

            glEnd();

glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.55,.7);
        glVertex2f(.45,.7);
        glVertex2f(.5,.8);

            glEnd();


glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.45,.6);
        glVertex2f(.45,.7);
        glVertex2f(.35,.65);

            glEnd();


//red star
glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(.45,.4);
        glVertex2f(.55,.4);
        glVertex2f(.55,.3);
        glVertex2f(.45,.3);

            glEnd();

glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.45,.4);
        glVertex2f(.55,.4);
        glVertex2f(.5,.5);

            glEnd();

glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.55,.4);
        glVertex2f(.55,.3);
        glVertex2f(.65,.35);

            glEnd();

glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.55,.3);
        glVertex2f(.45,.3);
        glVertex2f(.5,.2);

            glEnd();



//Left Triangle
glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(.45,.4);
        glVertex2f(.45,.3);
         glVertex2f(.35,.35);

            glEnd();





glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Star Designing");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
