#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glPointSize(5.0);

     glBegin(GL_POLYGON);
    glColor3ub (253, 254, 254);

    glVertex2i(125,220);
    glVertex2i(245,220);
    glVertex2i(245,210);
    glVertex2i(125,210);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    glVertex2i(100,200);
    glVertex2i(140,200);
    glVertex2i(150,190);
    glVertex2i(150,170);
    glVertex2i(120,170);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    glVertex2i(150,190);
    glVertex2i(430,190);
    glVertex2i(425,170);
    glVertex2i(150,170);

    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    glVertex2i(125,165);
    glVertex2i(423,165);
    glVertex2i(417,130);
    glVertex2i(145,130);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    glVertex2i(125,205);
    glVertex2i(140,205);
    glVertex2i(140,240);
    glVertex2i(125,240);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(143,205);

    glVertex2i(143,240);
    glVertex2i(155,240);
    glVertex2i(155,195);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(158,195);

    glVertex2i(158,240);
    glVertex2i(173,240);
    glVertex2i(173,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(176,195);

    glVertex2i(176,240);
    glVertex2i(191,240);
    glVertex2i(191,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(194,195);

    glVertex2i(194,240);
    glVertex2i(209,240);
    glVertex2i(209,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(212,195);

    glVertex2i(212,240);
    glVertex2i(227,240);
    glVertex2i(227,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(230,195);

    glVertex2i(230,240);
    glVertex2i(245,240);
    glVertex2i(245,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(251,195);

    glVertex2i(251,245);
    glVertex2i(280,245);
    glVertex2i(290,230);
    glVertex2i(290,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(296,195);

    glVertex2i(296,240);
    glVertex2i(320,240);
    glVertex2i(320,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(323,195);

    glVertex2i(323,240);
    glVertex2i(345,240);
    glVertex2i(345,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(348,195);

    glVertex2i(348,240);
    glVertex2i(373,240);
    glVertex2i(373,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(380,195);

    glVertex2i(380,245);
    glVertex2i(397,245);
    glVertex2i(405,230);
    glVertex2i(405,195);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);


    glVertex2i(412,195);

    glVertex2i(412,240);
    glVertex2i(430,240);
    glVertex2i(430,195);


    glEnd();

 glBegin(GL_POLYGON);
    glColor3ub (253, 254, 254);

    glVertex2i(125,230);
    glVertex2i(245,230);
    glVertex2i(245,225);
    glVertex2i(125,225);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (253, 254, 254);

    glVertex2i(125,215);
    glVertex2i(245,215);
    glVertex2i(245,210);
    glVertex2i(125,210);

    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub (253, 254, 254);

    glVertex2i(296,230);
    glVertex2i(373,230);
    glVertex2i(373,225);
    glVertex2i(296,225);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (253, 254, 254);

    glVertex2i(296,215);
    glVertex2i(373,215);
    glVertex2i(373,210);
    glVertex2i(296,210);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub (253, 254, 254);

    glVertex2i(412,230);
    glVertex2i(430,230);
    glVertex2i(430,225);
    glVertex2i(412,225);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (253, 254, 254);

    glVertex2i(412,215);
    glVertex2i(430,215);
    glVertex2i(430,210);
    glVertex2i(412,210);

    glEnd();



    glFlush ();
}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}





int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
