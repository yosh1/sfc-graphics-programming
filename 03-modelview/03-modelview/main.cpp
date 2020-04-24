//
//  main.cpp
//  03-modelview
//
//  Created by Yoshihisa Kaino on 2020/05/24.
//  Copyright © 2020 yoshi1125hisa. All rights reserved.
//

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>

const GLfloat lightPosition[4] = {
  5.25,
  2.0,
  0.25,
  1.0
};
const GLfloat teapotAmbient[4] = {
  0.3,
  0.5,
  0.0,
  1.0
};
const GLfloat teapotDiffuse[4] = {
  1.0,
  1.0,
  0.3,
  1.0
};
const GLfloat teapotSpecular[4] = {
  1.0,
  1.0,
  1.0,
  1.0
};
const GLfloat teapotShininess[1] = {
  20.0
};

void setup() {
  glEnable(GL_DEPTH_TEST); //enable shading (depth test)
  glEnable(GL_LIGHTING); //enable lighting
  glEnable(GL_LIGHT0); //1st light (0-7)
  glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
  glMaterialfv(GL_FRONT, GL_AMBIENT, teapotAmbient);
  glMaterialfv(GL_FRONT, GL_DIFFUSE, teapotDiffuse);
  glMaterialfv(GL_FRONT, GL_SPECULAR, teapotSpecular);
  glMaterialfv(GL_FRONT, GL_SHININESS, teapotShininess);
}

void resize(int w, int h) {
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(45.0, (double)(w / h), 0.9, 100.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(0.0, 0.0, 2.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

}

void draw(void) {
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glutWireTeapot(0.3);
  glColor3f(1.0, 1.0, 1.0);
  glutWireCube(2.0);
  glFlush();
}

int main(int argc, char * argv[]) {
  glutInit( & argc, argv);
  glutInitWindowSize(600, 600);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
  glutCreateWindow("Homework");
  glutReshapeFunc(resize);
  glutDisplayFunc(draw);
  setup();
  glutMainLoop();
  return 0;
}
