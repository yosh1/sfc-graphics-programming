//
//  main.cpp
//  helloOpenGLProject
//
//  Created by Yoshihisa Kaino on 2020/05/15.
//  Copyright © 2020 yoshi1125hisa. All rights reserved.
//

#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>

void display(void){
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
      glColor3f(0 , 0 , 0);
      glVertex2f(0 , 0);
      glColor3f(0 , 0 , 0);
      glVertex2f(1 , -0.9);
      glVertex2f(-1 , -0.9);
      glVertex2f(0 , 0);
      glColor3b(0 ,0 ,0);
      glVertex2f(-1 , 0.9);
      glVertex2f(1 , 0.9);
    glEnd();
    glFlush();
}

int main(int argc, char ** argv) {
    glutInit(&argc , argv);
    glutInitWindowPosition(1 , 1);
    glutInitWindowSize(1200 , 1200);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

    glutCreateWindow("OpenGL Sample");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
