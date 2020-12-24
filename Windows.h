#include<GL/glut.h>
extern void drawWindows();
void drawWindows()
{
glColor3f(0.6f, 0.7333f, 1.0f);
glBegin(GL_QUADS);
glVertex3f(-9.99f, 2.0f, 6.0f);
glVertex3f(-9.99f, 5.0f, 6.0f);
glVertex3f(-9.99f, 5.0f, 2.0f);
glVertex3f(-9.99f, 2.0f, 2.0f);
glEnd();

glColor3f(0.149f, 0.149f, 0.149f);
glLineWidth(10.0f);
glBegin(GL_LINES);
//left
glVertex3f(-9.98f, 2.0f, 6.0f);
glVertex3f(-9.98f, 5.0f, 6.0f);
//top
glVertex3f(-9.98f, 5.0f, 6.0f);
glVertex3f(-9.98f, 5.0f, 2.0f);
//right
glVertex3f(-9.98f, 2.0f, 2.0f);
glVertex3f(-9.98f, 5.0f, 2.0f);
//bottom
glVertex3f(-9.98f, 2.0f, 6.0f);
glVertex3f(-9.98f, 2.0f, 2.0f);
glEnd();

//Cross
glLineWidth(3.0f);
glBegin(GL_LINES);
glVertex3f(-9.98f, 2.0f, 4.0f);
glVertex3f(-9.98f, 5.0f, 4.0f);

glVertex3f(-9.98f, 3.5f, 6.0f);
glVertex3f(-9.98f, 3.5f, 2.0f);
glEnd();
}

	
