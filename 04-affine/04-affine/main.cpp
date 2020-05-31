//
//  main.cpp
//  04-affine
//
//  Created by Yoshihisa Kaino on 2020/05/31.
//  Copyright © 2020 yoshi1125hisa. All rights reserved.
//

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>

int rotation1, rotation2 = 0;

//original function setting up light ang material
void setup(){
    //LIGHTING
    float lightPosition[4] = {5.25, 2.0, 0.25, 1.0};
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
    
    //MATERIAL
    float ambient[4] = {0.3, 0.5, 0.0, 1.0};
    float diffuse[4] = {1.0, 1.0, 0.3, 1.0};
    float specular[4] = {1.0, 1.0, 1.0, 1.0};
    float shininess[1] = {20.0f};
    glMaterialfv(GL_FRONT, GL_AMBIENT, ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
}
void reshape(int width, int height){
    glViewport(0, 0, width, height);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)width/height, 0.1, 100.0);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 3.0, 13.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 );
}



void idle(void){
    rotation1++;
    rotation2--;
    if(rotation1 >= 360) rotation1 = 0;
    if(rotation2 >= 360) rotation2 = 0;
    glutPostRedisplay();
}

void display(void){
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glPushMatrix();
    glRotatef(rotation1, 1.0, 0.0, 1.0);
    glTranslatef(0, 0, 0);
    glutSolidCube(2);
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(rotation2, 0.0, 1.0, 1.0);
    glTranslatef(0, 0, 0);
    glutSolidCube(2);
    glPopMatrix();
    
    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        glutIdleFunc(idle);
    }else {
        glutIdleFunc(0);
    }
}

int main(int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutCreateWindow("affine transformation");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    setup();
    glutMainLoop();
    return 0;
}
