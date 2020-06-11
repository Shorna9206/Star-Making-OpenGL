#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/


///white star
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.45, 0.45, 0.0);
glVertex3f (0.53, 0.42, 0.0);
glVertex3f (0.53, 0.48, 0.0);
glEnd();
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.53, 0.48, 0.0);
glVertex3f (0.59, 0.48, 0.0);
glVertex3f (0.56, 0.56, 0.0);
glEnd();
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.59, 0.42, 0.0);
glVertex3f (0.67, 0.45, 0.0);
glVertex3f (0.59, 0.48, 0.0);
glEnd();
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.59, 0.42, 0.0);
glVertex3f (0.56, 0.34, 0.0);
glVertex3f (0.53, 0.42, 0.0);
glEnd();
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.53, 0.42, 0.0);
glVertex3f (0.59, 0.42, 0.0);
glVertex3f (0.59, 0.48, 0.0);
glVertex3f (0.53, 0.48, 0.0);
glEnd();


///red star
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.67, 0.45, 0.0);
glVertex3f (0.75, 0.42, 0.0);
glVertex3f (0.75, 0.48, 0.0);
glEnd();
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.75, 0.48, 0.0);
glVertex3f (0.81, 0.48, 0.0);
glVertex3f (0.78, 0.56, 0.0);
glEnd();
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.81, 0.42, 0.0);
glVertex3f (0.89, 0.45, 0.0);
glVertex3f (0.81, 0.48, 0.0);
glEnd();
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.81, 0.42, 0.0);
glVertex3f (0.78, 0.34, 0.0);
glVertex3f (0.75, 0.42, 0.0);
glEnd();
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.75, 0.42, 0.0);
glVertex3f (0.81, 0.42, 0.0);
glVertex3f (0.81, 0.48, 0.0);
glVertex3f (0.75, 0.48, 0.0);
glEnd();


///green star
glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.64, 0.38, 0.0);
glVertex3f (0.70, 0.38, 0.0);
glVertex3f (0.67, 0.45, 0.0);
glEnd();
glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.70, 0.32, 0.0);
glVertex3f (0.78, 0.34, 0.0);
glVertex3f (0.70, 0.38, 0.0);
glEnd();
glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.70, 0.32, 0.0);
glVertex3f (0.67, 0.23, 0.0);
glVertex3f (0.64, 0.32, 0.0);
glEnd();
glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.56, 0.34, 0.0);
glVertex3f (0.64, 0.32, 0.0);
glVertex3f (0.64, 0.38, 0.0);
glEnd();
glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.64, 0.32, 0.0);
glVertex3f (0.70, 0.32, 0.0);
glVertex3f (0.70, 0.38, 0.0);
glVertex3f (0.64, 0.38, 0.0);
glEnd();


///Blue star
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.67, 0.45, 0.0);
glVertex3f (0.70, 0.53, 0.0);
glVertex3f (0.64, 0.53, 0.0);
glEnd();
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.70, 0.53, 0.0);
glVertex3f (0.78, 0.56, 0.0);
glVertex3f (0.70, 0.59, 0.0);
glEnd();
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.64, 0.59, 0.0);
glVertex3f (0.70, 0.59, 0.0);
glVertex3f (0.67, 0.67, 0.0);
glEnd();
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.56, 0.56, 0.0);
glVertex3f (0.64, 0.53, 0.0);
glVertex3f (0.64, 0.59, 0.0);
glEnd();
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.64, 0.53, 0.0);
glVertex3f (0.70, 0.53, 0.0);
glVertex3f (0.70, 0.59, 0.0);
glVertex3f (0.64, 0.59, 0.0);
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
