#include <windows.h>
#include<cstdio>
#include <GL/glut.h>
#include <GL/gl.h>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
# define PI           3.14159265358979323846
using namespace std;
bool first=true;
bool firstSound=true;
bool m=false;
void morning();
void noon();
void afternoon();
void evening();
void night();
void rainy();
void snowfall();

void mSky();
void msun();
void bird();
void nsky();
void nsun();
void asky();
void asun();
void acloud();
void esky();
void esun();
void nytSky();
void moon();
void ncloud();


void plane();
void ground();
void tree();
void road();
void dcar1();
void dcar2();
void dcar3();
void dbus1();
void dbus2();
void ncar1();
void nbus1();

void rain();
void snow();


void day_buildings();
void night_buildings();

void dlamp();
void nlamp();

void sound1(int val);
void sound2(int val);




GLfloat birdSpeed = 0.009f;
GLfloat birdPosition = 0.02f;

GLfloat planeSpeed = 0.02f;
GLfloat planePosition = 0.08f;

GLfloat rightSpeed = 0.05f;
GLfloat rightPosition = 0.0f;

GLfloat leftSpeed = 0.05f;
GLfloat leftPosition = 0.0f;

GLfloat snowPosition = 0.0f;
GLfloat snowSpeed = 0.01f;

GLfloat rainPosition = 0.0f;
GLfloat rainSpeed = 0.5f;

GLfloat msunPosition=-0.5f;
GLfloat msunSpeed = 0.0045f;

GLfloat nsunPosition=0.4f;
GLfloat nsunSpeed = 0.002f;

GLfloat esunPosition=0.8f;
GLfloat esunSpeed = 0.0045f;


void init() {
    glLoadIdentity();
}
void sound1(int val){
if(m){
PlaySound("bird.wav", NULL,SND_ASYNC|SND_FILENAME);
glutTimerFunc(39000,sound1,0);
}
else{
    glutTimerFunc(200,sound1,0);
}

}
void sound2(int val){
    if(!m && firstSound){
    PlaySound("car.wav",NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
    firstSound=false;
    //glutTimerFunc(15000,soundCT,0);

    //midNight=true;
}
//if(midNight){
     glutTimerFunc(1000,sound2,0);
//}
}



void update(int value) {


if(birdPosition > 1.5)
        birdPosition = -1.5f;

    birdPosition += birdSpeed;


	glutPostRedisplay();


	glutTimerFunc(50, update, 0);
}


void update1(int value) {


if(planePosition <- 1.5)
        planePosition = 1.0f;

    planePosition -= planeSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {


if(rightPosition > 1.5)
        rightPosition = -1.5f;

    rightPosition += rightSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update3(int value) {


if(leftPosition <- 1.5)
        leftPosition = 2.0;

    leftPosition -= leftSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value)
{

       if(snowPosition < -1.5)
       {
         snowPosition = 2.0f;
       }

       if(snowPosition>2.0)
       {
          snowPosition=-1.5;
       }
       snowPosition -= snowSpeed;
       glutPostRedisplay();
       glutTimerFunc(25, update4, 0);
}

void update5(int value)
{

       if(rainPosition < -1.0)
         rainPosition = 1.0f;

       rainPosition -= rainSpeed;
       glutPostRedisplay();
       glutTimerFunc(25, update5, 0);
}

void update6(int value)
{

       if(msunPosition > 1.0)
         msunPosition = 1.0f;

       msunPosition += msunSpeed;
       glutPostRedisplay();
       glutTimerFunc(100, update6, 0);
}

void update7(int value)
{

       if(nsunPosition <-1.0)
         nsunPosition = 1.0f;

       nsunPosition -= nsunSpeed;
       glutPostRedisplay();
       glutTimerFunc(100, update7, 0);
}

void update8(int value)
{

       if(esunPosition <-1.0)
         esunPosition = .80f;

       esunPosition -= esunSpeed;
       glutPostRedisplay();
       glutTimerFunc(100, update8, 0);
}


void FilledCircle(GLfloat cx,GLfloat cy, GLfloat r, int amount){
    int i;
    GLfloat twicePi=2.0f*PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(i=0;i<=amount;i++){
        glVertex2f(
            cx+(r*cos(i*twicePi/amount)),
            cy+(r*sin(i*twicePi/amount))
        );


    }
    glEnd();
}
void mSky()
{
    glBegin(GL_QUADS);
    glColor3ub(180, 235, 245);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glColor3ub(200, 240, 250);
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();
}

void nSky()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 200, 220);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glColor3ub(200, 240, 250);
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();
}

void aSky()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 200, 220);
    glVertex2f(1.0,1.0);
    glColor3ub( 224, 159, 107 );
    glVertex2f(-1.0,1.0);
    glColor3ub( 224, 159, 107 );
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();

}

void eSky()
{
    glBegin(GL_QUADS);
    glColor3ub( 173, 56, 33);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glColor3ub( 224, 159, 107);
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();

}

void nytSky()
{
    glBegin(GL_QUADS);
    glColor3ub(80, 80, 80);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glColor3ub(150, 150, 150);
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();
}



void msun(){
    glPushMatrix();
    glTranslatef(0.0f,msunPosition, 0.0f);
    glColor3ub(242, 221, 125 );
    FilledCircle(.6,.8,.1,100);
    glPopMatrix();
    glLoadIdentity();
}
void bird()
{
    glPushMatrix();
    glTranslatef(birdPosition,birdPosition, 0.0f);
    glBegin(GL_QUADS);
glColor3ub(11, 8, 6);
glVertex2f(-0.7,0.67);
glVertex2f(-0.8,0.6);
glVertex2f(-0.65,.6);
glVertex2f(-0.61,.65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(11, 8, 6);
glVertex2f(-0.8,0.7);
glVertex2f(-0.75,0.6);
glVertex2f(-0.66,.63);
glEnd();
glPopMatrix();
glLoadIdentity();

//2
glPushMatrix();
glTranslatef(birdPosition,birdPosition, 0.0f);
glTranslatef(0.15,0.1,0);
glBegin(GL_QUADS);
glColor3ub(11, 8, 6);
glVertex2f(-0.7,0.67);
glVertex2f(-0.8,0.6);
glVertex2f(-0.65,.6);
glVertex2f(-0.61,.65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(11, 8, 6);
glVertex2f(-0.8,0.7);
glVertex2f(-0.75,0.6);
glVertex2f(-0.66,.63);
glEnd();
glPopMatrix();
glLoadIdentity();

//3
glPushMatrix();
glTranslatef(birdPosition,birdPosition, 0.0f);
glTranslatef(-0.1,0.1,0);
glBegin(GL_QUADS);
glColor3ub(11, 8, 6);
glVertex2f(-0.7,0.67);
glVertex2f(-0.8,0.6);
glVertex2f(-0.65,.6);
glVertex2f(-0.61,.65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(11, 8, 6);
glVertex2f(-0.8,0.7);
glVertex2f(-0.75,0.6);
glVertex2f(-0.66,.63);
glEnd();
glPopMatrix();
glLoadIdentity();
}

void nsun(){

     glPushMatrix();
    glTranslatef(nsunPosition,0.0f, 0.0f);
     glColor3ub(245, 173, 31 );
    FilledCircle(.6,.8,.1,100);
    glPopMatrix();
    glLoadIdentity();
}
void acloud()
{
    glColor3ub(220, 220, 220);
    FilledCircle(.28,.8,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.2,.8,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.25,.75,.05,100);

    glColor3ub(220, 220, 220);
    FilledCircle(-.48,.85,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.4,.85,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.45,.8,.05,100);


    glColor3ub(220, 220, 220);
    FilledCircle(-.88,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.8,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.85,.85,.05,100);

     glColor3ub(220, 220, 220);
    FilledCircle(.58,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.5,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.55,.85,.05,100);
}

void asun(){

    glColor3ub( 227, 147, 32 );
    FilledCircle(.6,.8,.1,100);
}

void esun(){
 glPushMatrix();
    glTranslatef(0.0f,esunPosition, 0.0f);
    glColor3ub(245, 173, 31 );
    FilledCircle(.6,.8,.1,100);
    glPopMatrix();
    glLoadIdentity();
}

void ncloud()
{
    glColor3ub(220, 220, 220);
    FilledCircle(.28,.8,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.2,.8,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.25,.75,.05,100);

    glColor3ub(220, 220, 220);
    FilledCircle(-.48,.85,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.4,.85,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.45,.8,.05,100);


    glColor3ub(220, 220, 220);
    FilledCircle(-.88,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.8,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.85,.85,.05,100);

     glColor3ub(220, 220, 220);
    FilledCircle(.58,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.5,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.55,.85,.05,100);
}
void moon(){

    glColor3ub(237, 234, 245 );
    FilledCircle(.6,.8,.1,100);
}


void ground()
{
    glBegin(GL_QUADS);
    glColor3ub(13, 198, 47);
    glVertex2f(-1.0,.09);
    glVertex2f(1.0,.09);
    glVertex2f(1.0,.2);
    glVertex2f(-1.0,.2);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(178, 186, 187);
    glVertex2f(-1.0,.09);
    glVertex2f(1.0,.09);
    glVertex2f(1.0,-0.1);
    glVertex2f(-1.0,-0.1);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(92, 92, 89);
    glVertex2f(-1.0,-0.07);
    glVertex2f(1.0,-.07);
    glVertex2f(1.0,-0.1);
    glVertex2f(-1.0,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 36, 0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-.6);
    glVertex2f(-1.0,-.6);
    glEnd();
}

void tree()
{
    //tree

   glBegin(GL_QUADS);
    glColor3ub(165, 49, 0);
    glVertex2f(-.58,.1);
    glVertex2f(-.56,.1);
    glVertex2f(-.56,.25);
    glVertex2f(-.58,.25);
    glEnd();


    glColor3ub(45,140,0);
    FilledCircle(-.6,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(-.54,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(-.57,.25,.05,100);

    //tree-2

    glBegin(GL_QUADS);
    glColor3ub(165, 49, 0);
    glVertex2f(-.02,.1);
    glVertex2f(-.00,.1);
    glVertex2f(-.00,.25);
    glVertex2f(-.02,.25);
    glEnd();

    glColor3ub(45,140,0);
    FilledCircle(-.04,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(.02,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(-.01,.25,.05,100);

    //tree-3
    glTranslatef(0.5,0,0);
    glBegin(GL_QUADS);
    glColor3ub(165, 49, 0);
    glVertex2f(-.02,.1);
    glVertex2f(-.00,.1);
    glVertex2f(-.00,.25);
    glVertex2f(-.02,.25);
    glEnd();

    glColor3ub(45,140,0);
    FilledCircle(-.04,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(.02,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(-.01,.25,.05,100);

    glLoadIdentity();



    //tree4
    glBegin(GL_QUADS);
    glColor3ub(165, 49, 0);
    glVertex2f(-.8,-.5);
    glVertex2f(-.8,-.9);
    glVertex2f(-.7,-.9);
    glVertex2f(-.7,-.5);

    glEnd();

    glColor3ub(45,140,0);
    FilledCircle(-.9,-.4,.2,100);
    glColor3ub(45,140,0);
    FilledCircle(-.6,-.4,.2,100);
    glColor3ub(45,140,0);
    FilledCircle(-.75,-.2,.2,100);
    //ful
    glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

     glTranslatef(0.1,0.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);
    //glLoadIdentity();

    glTranslatef(0.1,0.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);
    glLoadIdentity();

    glTranslatef(-0.1,0,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);
    //glLoadIdentity();

    glTranslatef(0.05,.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

    glTranslatef(0.1,.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

    glTranslatef(0.25,-0.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

      glTranslatef(0.01,-0.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

     glTranslatef(-0.1,-0.05,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

    glTranslatef(0.005,0.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

    glTranslatef(0,0.3,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

     glTranslatef(-0.1,0.05,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

    glTranslatef(-0.1,-0.05,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

     glTranslatef(-0.1,-0.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

    glTranslatef(0.2,0.02,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

     glTranslatef(0.25,-0.08,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

    glTranslatef(0.05,-0.1,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);

     glTranslatef(-0.55,0.07,0);
     glColor3ub(225, 19, 31);
    FilledCircle(-.87,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-.85,-0.48,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.83,-.5,.015,100);
    glColor3ub(225, 19, 31);
    FilledCircle(-0.85,-.52,.015,100);
    glLoadIdentity();
    //flower
    glBegin(GL_POLYGON);
    glColor3ub(250, 67, 14);
    glVertex2f(-.65,-.9);
     glVertex2f(-.67,-.92);
     glVertex2f(-.65,-.94);
      glVertex2f(-.63,-.94);
      glVertex2f(-.61,-.92);
      glVertex2f(-.63,-.94);
      glEnd();
      glTranslatef(.05,0.02,0);
    glBegin(GL_POLYGON);
    glColor3ub(250, 67, 14);
    glVertex2f(-.65,-.9);
     glVertex2f(-.67,-.92);
     glVertex2f(-.65,-.94);
      glVertex2f(-.63,-.94);
      glVertex2f(-.61,-.92);
      glVertex2f(-.63,-.94);
      glEnd();
      glLoadIdentity();

glTranslatef(.2,0.2,0);
    glBegin(GL_POLYGON);
    glColor3ub(250, 67, 14);
    glVertex2f(-.65,-.9);
     glVertex2f(-.67,-.92);
     glVertex2f(-.65,-.94);
      glVertex2f(-.63,-.94);
      glVertex2f(-.61,-.92);
      glVertex2f(-.63,-.94);
      glEnd();

glLoadIdentity();

}
void snow()
{
    glPushMatrix();
    glTranslatef(-snowPosition,snowPosition, 0.0f);
    glColor3ub(255,255,255);
    FilledCircle(0,0,0.02,100);
    FilledCircle(-0.6,0.7,0.02,100);
    FilledCircle(-0,0.9,0.02,100);
    FilledCircle(-0.86,0.7,0.02,100);
    FilledCircle(-0.65,0.87,0.02,100);
    FilledCircle(-0.57,0.34,0.02,100);
    FilledCircle(0,0,0.02,100);
    FilledCircle(0.54,0.52,0.02,100);
    FilledCircle(0.67,0.67,0.02,100);
    FilledCircle(0.82,0.35,0.02,100);
    FilledCircle(0.38,0.2,0.02,100);
    FilledCircle(0.9,0.6,0.02,100);
    FilledCircle(0.2,0.5,0.02,100);
    FilledCircle(-0.32,0.5,0.02,100);
    FilledCircle(-0.65,0.25,0.02,100);
    FilledCircle(-0.7,0.3,0.02,100);

    glTranslatef(snowPosition,snowPosition, 0.0f);
    glColor3ub(255,255,255);
    glTranslatef(-0.2,1,0);
    FilledCircle(0,0,0.02,100);
    FilledCircle(-0.6,0.7,0.02,100);
    FilledCircle(-0,0.9,0.02,100);
    FilledCircle(-0.86,0.7,0.02,100);
    FilledCircle(-0.65,0.87,0.02,100);
    FilledCircle(-0.57,0.34,0.02,100);
    FilledCircle(0,0,0.02,100);
    FilledCircle(0.54,0.52,0.02,100);
    FilledCircle(0.67,0.67,0.02,100);
    FilledCircle(0.82,0.35,0.02,100);
    FilledCircle(0.38,0.2,0.02,100);
    FilledCircle(0.9,0.6,0.02,100);
    FilledCircle(0.2,0.5,0.02,100);
    FilledCircle(-0.32,0.5,0.02,100);
    FilledCircle(-0.65,0.25,0.02,100);
    FilledCircle(-0.7,0.3,0.02,100);


    glTranslatef(0.0f,snowPosition, 0.0f);
    glColor3ub(255,255,255);
    glTranslatef(0.2,0,0);
    FilledCircle(0,0,0.02,100);
    FilledCircle(-0.6,0.7,0.02,100);
    FilledCircle(-0,0.9,0.02,100);
    FilledCircle(-0.86,0.7,0.02,100);
    FilledCircle(-0.65,0.87,0.02,100);
    FilledCircle(-0.57,0.34,0.02,100);
    FilledCircle(0,0,0.02,100);
    FilledCircle(0.54,0.52,0.02,100);
    FilledCircle(0.67,0.67,0.02,100);
    FilledCircle(0.82,0.35,0.02,100);
    FilledCircle(0.38,0.2,0.02,100);
    FilledCircle(0.9,0.6,0.02,100);
    FilledCircle(0.2,0.5,0.02,100);
    FilledCircle(-0.32,0.5,0.02,100);
    FilledCircle(-0.65,0.25,0.02,100);
    FilledCircle(-0.7,0.3,0.02,100);
    glPopMatrix();
}

void rain()
{
    glPushMatrix();
glTranslatef(0.0f,rainPosition,0.0f);
    glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();
     glTranslatef(0,-0.3,0);
      glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();

     glTranslatef(0,-0.3,0);
      glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();

     glTranslatef(0,-0.3,0);
     glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();
     glTranslatef(0,-0.3,0);
     glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();
     glTranslatef(0,-0.3,0);
     glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();
     glTranslatef(0,-0.3,0);
     glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();
     glTranslatef(0,-0.3,0);
     glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();

     glTranslatef(0,-0.3,0);
     glBegin(GL_LINES);
    glColor3ub(165, 168, 167 );
    glVertex2f(-0.9,0.95);
     glVertex2f(-0.98,0.75);
      glVertex2f(-0.8,0.95);
       glVertex2f(-0.89,0.75);
        glVertex2f(-0.7,0.95);
       glVertex2f(-0.79,0.75);
        glVertex2f(-0.6,0.95);
       glVertex2f(-0.69,0.75);
        glVertex2f(-0.5,0.95);
       glVertex2f(-0.59,0.75);
        glVertex2f(-0.4,0.95);
       glVertex2f(-0.49,0.75);
        glVertex2f(-0.3,0.95);
       glVertex2f(-0.39,0.75);
        glVertex2f(-0.2,0.95);
       glVertex2f(-0.29,0.75);
        glVertex2f(-0.1,0.95);
       glVertex2f(-0.19,0.75);
        glVertex2f(0,0.95);
       glVertex2f(-0.09,0.75);
        glVertex2f(0.1,0.95);
       glVertex2f(0.01,0.75);
        glVertex2f(0.2,0.95);
       glVertex2f(0.11,0.75);
        glVertex2f(0.3,0.95);
       glVertex2f(0.21,0.75);
        glVertex2f(0.4,0.95);
       glVertex2f(0.31,0.75);
        glVertex2f(0.5,0.95);
       glVertex2f(0.41,0.75);
        glVertex2f(0.6,0.95);
       glVertex2f(0.51,0.75);
        glVertex2f(0.7,0.95);
       glVertex2f(0.61,0.75);
        glVertex2f(0.8,0.95);
       glVertex2f(0.71,0.75);
        glVertex2f(0.9,0.95);
       glVertex2f(0.81,0.75);
     glEnd();

     glPushMatrix();
     glLoadIdentity();
}
void day_buildings()
{
    //building 1
    //struc
    glBegin(GL_QUADS);
    glColor3ub(146, 118, 226);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(215, 35, 10);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub( 51, 176, 191);
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();




//building 2
    //struc
    glTranslatef(-1.75,0,0);

    glBegin(GL_QUADS);
    glColor3ub(250, 109, 109);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(4, 0, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();

glLoadIdentity();


//building 3
    //struc
    glTranslatef(-0.2,0.15,0);
    glScalef(0.5,0.5,0);
    glBegin(GL_QUADS);
    glColor3ub(27, 157, 147);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(4, 0, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();

glLoadIdentity();

//building 4
    //struc
    glTranslatef(-.7,0.15,0);
    glScalef(0.5,0.5,0);
    glBegin(GL_QUADS);
    glColor3ub(27, 157, 147);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(4, 0, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 176, 191);
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();

glLoadIdentity();

}

void night_buildings()
{
   //building 1
    //struc
    glBegin(GL_QUADS);
    glColor3ub(146, 118, 226);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(215, 35, 10);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();




//building 2
    //struc
    glTranslatef(-1.75,0,0);

    glBegin(GL_QUADS);
    glColor3ub(250, 109, 109);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(4, 0, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();

glLoadIdentity();


//building 3
    //struc
    glTranslatef(-0.2,0.15,0);
    glScalef(0.5,0.5,0);
    glBegin(GL_QUADS);
    glColor3ub(27, 157, 147);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(4, 0, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();

glLoadIdentity();

//building 4
    //struc
    glTranslatef(-.7,0.15,0);
    glScalef(0.5,0.5,0);
    glBegin(GL_QUADS);
    glColor3ub(27, 157, 147);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

     //door
    glBegin(GL_QUADS);
    glColor3ub(4, 0, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows


    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.48);
    glVertex2f(.85,.48);
    glVertex2f(.85,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.33);
    glVertex2f(.85,.33);
    glVertex2f(.85,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.78,.18);
    glVertex2f(.85,.18);
    glVertex2f(.85,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.89,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.89,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81 );
    glVertex2f(.89,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.89,.25);
    glEnd();

glLoadIdentity();

}

void road()
{
    glBegin(GL_QUADS);
    glColor3ub(129, 115, 113);
    glVertex2f(-1.0,-0.1);
    glVertex2f(1.0,-0.1);
    glVertex2f(1.0,-.6);
    glVertex2f(-1.0,-.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 203, 10);
    glVertex2f(-1.0,-0.27);
    glVertex2f(1.0,-0.27);
    glVertex2f(1.0,-.3);
    glVertex2f(-1.0,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 203, 10);
    glVertex2f(-1.0,-0.37);
    glVertex2f(1.0,-0.37);
    glVertex2f(1.0,-.4);
    glVertex2f(-1.0,-.4);
    glEnd();


}


void dcar1()
{
    glPushMatrix();
    glTranslatef(leftPosition,0.0, 0.0f);
    //car
     glBegin(GL_POLYGON);
    glColor3ub(164, 153, 154);
    glVertex2f(.25,-.55);
    glVertex2f(.6,-.55);
    glVertex2f(.6,-.46);
    glVertex2f(.55,-.46);
    glVertex2f(.5,-.42);
    glVertex2f(.4,-.42);
    glVertex2f(.35,-.47);
    glVertex2f(.25,-.47);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.35,-.47);
    glVertex2f(.45,-.47);
    glVertex2f(.45,-.43);
    glVertex2f(.4,-.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.46,-.47);
    glVertex2f(.53,-.47);
    glVertex2f(.5,-.43);
    glVertex2f(.46,-.43);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(.35,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.35,-.54,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(.5,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.5,-.54,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(.25,-.53);
    glVertex2f(.27,-.53);
    glVertex2f(.27,-.5);
    glVertex2f(.25,-.5);
    glEnd();
//car 2
    glTranslatef(-0.5,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(153, 18, 12 );
    glVertex2f(.25,-.55);
    glVertex2f(.6,-.55);
    glVertex2f(.6,-.46);
    glVertex2f(.55,-.46);
    glVertex2f(.5,-.42);
    glVertex2f(.4,-.42);
    glVertex2f(.35,-.47);
    glVertex2f(.25,-.47);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.35,-.47);
    glVertex2f(.45,-.47);
    glVertex2f(.45,-.43);
    glVertex2f(.4,-.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.46,-.47);
    glVertex2f(.53,-.47);
    glVertex2f(.5,-.43);
    glVertex2f(.46,-.43);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(.35,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.35,-.54,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(.5,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.5,-.54,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(.25,-.53);
    glVertex2f(.27,-.53);
    glVertex2f(.27,-.5);
    glVertex2f(.25,-.5);
    glEnd();
    glPopMatrix();

    glLoadIdentity();

}
void dcar2()
{
    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
//car 3
    glBegin(GL_POLYGON);
    glColor3ub(17, 132, 73 );
    glVertex2f(-0.5,-.1);
    glVertex2f(-0.5,-.13);
    glVertex2f(-0.55,-.13);
    glVertex2f(-0.55,-.2);
    glVertex2f(-0.25,-.2);
    glVertex2f(-0.25,-.13);
    glVertex2f(-0.3,-.13);
    glVertex2f(-0.3,-.1);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(-0.47,-.11);
    glVertex2f(-.47,-.15);
    glVertex2f(-.42,-.15);
    glVertex2f(-.42,-.11);
    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(-0.47,-.11);
    glVertex2f(-.47,-.15);
    glVertex2f(-.42,-.15);
    glVertex2f(-.42,-.11);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(-.55,-.2,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.55,-.2,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(-.4,-.2,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.4,-.2,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(-.35,-.15);
    glVertex2f(-.35,-.15);
    glVertex2f(-.32,-.17);
    glVertex2f(-.32,-.17);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
    glTranslatef(1.5,0,0);
//car 3
    glBegin(GL_POLYGON);
    glColor3ub(210, 159, 166  );
    glVertex2f(-0.5,-.1);
    glVertex2f(-0.5,-.13);
    glVertex2f(-0.55,-.13);
    glVertex2f(-0.55,-.2);
    glVertex2f(-0.25,-.2);
    glVertex2f(-0.25,-.13);
    glVertex2f(-0.3,-.13);
    glVertex2f(-0.3,-.1);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(-0.47,-.11);
    glVertex2f(-.47,-.15);
    glVertex2f(-.42,-.15);
    glVertex2f(-.42,-.11);
    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(-0.47,-.11);
    glVertex2f(-.47,-.15);
    glVertex2f(-.42,-.15);
    glVertex2f(-.42,-.11);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(-.55,-.2,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.55,-.2,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(-.4,-.2,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.4,-.2,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(-.35,-.15);
    glVertex2f(-.35,-.15);
    glVertex2f(-.32,-.17);
    glVertex2f(-.32,-.17);
    glEnd();
    glPopMatrix();

    glLoadIdentity();

}
void dbus1()
{
    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 106  );
    glVertex2f(.1,-.12);
    glVertex2f(.1,-.22);
    glVertex2f(.5,-.22);
    glVertex2f(.5,-.12);
    glEnd();

     //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();

    glTranslatef(0.1,0,0);
     glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();

     glTranslatef(0.1,0,0);
     glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();

     glTranslatef(0.1,0,0);
     glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();


    //tires
    glColor3ub(0,0,0);
    FilledCircle(.125,-.21,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.125,-.21,.02,100);

    glTranslatef(-0.2,0,0);
         glColor3ub(0,0,0);
    FilledCircle(.125,-.21,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.125,-.21,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(.38,-.19);
    glVertex2f(.38,-.14);
    glVertex2f(.4,-.14);
    glVertex2f(.4,-.19);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}

void ncar1()
{
    glPushMatrix();
    glTranslatef(leftPosition,0.0, 0.0f);
     glBegin(GL_POLYGON);
    glColor3ub(164, 153, 154);
    glVertex2f(.25,-.55);
    glVertex2f(.6,-.55);
    glVertex2f(.6,-.46);
    glVertex2f(.55,-.46);
    glVertex2f(.5,-.42);
    glVertex2f(.4,-.42);
    glVertex2f(.35,-.47);
    glVertex2f(.25,-.47);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.35,-.47);
    glVertex2f(.45,-.47);
    glVertex2f(.45,-.43);
    glVertex2f(.4,-.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.46,-.47);
    glVertex2f(.53,-.47);
    glVertex2f(.5,-.43);
    glVertex2f(.46,-.43);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(.35,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.35,-.54,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(.5,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.5,-.54,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81);
    glVertex2f(.25,-.53);
    glVertex2f(.27,-.53);
    glVertex2f(.27,-.5);
    glVertex2f(.25,-.5);
    glEnd();

glPopMatrix();
    glLoadIdentity();
}
void nbus1()
{
    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
    //bus
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 106  );
    glVertex2f(.1,-.12);
    glVertex2f(.1,-.22);
    glVertex2f(.5,-.22);
    glVertex2f(.5,-.12);
    glEnd();

     //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();

    glTranslatef(0.1,0,0);
     glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();

     glTranslatef(0.1,0,0);
     glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();

     glTranslatef(0.1,0,0);
     glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(.13,-.13);
    glVertex2f(.13,-.17);
    glVertex2f(.17,-.17);
    glVertex2f(.17,-.13);
    glEnd();


    //tires
    glColor3ub(0,0,0);
    FilledCircle(.125,-.21,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.125,-.21,.02,100);

    glTranslatef(-0.2,0,0);
         glColor3ub(0,0,0);
    FilledCircle(.125,-.21,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.125,-.21,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81);
    glVertex2f(.38,-.19);
    glVertex2f(.38,-.14);
    glVertex2f(.4,-.14);
    glVertex2f(.4,-.19);
    glEnd();
    glPopMatrix();

    glLoadIdentity();

}

void ncar2()
{
    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
//car 3
    glBegin(GL_POLYGON);
    glColor3ub(17, 132, 73 );
    glVertex2f(-0.5,-.1);
    glVertex2f(-0.5,-.13);
    glVertex2f(-0.55,-.13);
    glVertex2f(-0.55,-.2);
    glVertex2f(-0.25,-.2);
    glVertex2f(-0.25,-.13);
    glVertex2f(-0.3,-.13);
    glVertex2f(-0.3,-.1);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(-0.47,-.11);
    glVertex2f(-.47,-.15);
    glVertex2f(-.42,-.15);
    glVertex2f(-.42,-.11);
    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(-0.47,-.11);
    glVertex2f(-.47,-.15);
    glVertex2f(-.42,-.15);
    glVertex2f(-.42,-.11);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(-.55,-.2,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.55,-.2,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(-.4,-.2,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.4,-.2,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(235, 238, 81);
    glVertex2f(-.35,-.15);
    glVertex2f(-.35,-.15);
    glVertex2f(-.32,-.17);
    glVertex2f(-.32,-.17);
    glEnd();
    glPopMatrix();

    glLoadIdentity();

}




void dlamp()
{
     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(255,255,255);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(255,255,255);
    FilledCircle(0.16,0.12,.025,100);

    //2

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(255,255,255);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(255,255,255);
    FilledCircle(0.16,0.12,.025,100);


     glTranslatef(-1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(255,255,255);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(255,255,255);
    FilledCircle(0.16,0.12,.025,100);


     glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(255,255,255);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(255,255,255);
    FilledCircle(0.16,0.12,.025,100);



    glLoadIdentity();

}
void nlamp()
{
    //lamppost
    glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(235, 238, 81);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(235, 238, 81);
    FilledCircle(0.16,0.12,.025,100);

    //2

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(235, 238, 81);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(235, 238, 81);
    FilledCircle(0.16,0.12,.025,100);


     glTranslatef(-1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(235, 238, 81);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(235, 238, 81);
    FilledCircle(0.16,0.12,.025,100);


     glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,-0.07);
    glVertex2f(0.12,-0.07);
    glVertex2f(0.12,0.15);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(4,4,4);
    glVertex2f(0.07,0.15);
    glVertex2f(0.07,0.13);
    glVertex2f(0.15,0.13);
    glVertex2f(0.15,0.15);
    glEnd();

    glColor3ub(235, 238, 81);
    FilledCircle(.06,0.12,.025,100);

     glColor3ub(235, 238, 81);
    FilledCircle(0.16,0.12,.025,100);



    glLoadIdentity();
}


void plane()
{
    glPushMatrix();
    glTranslatef(planePosition,0.0, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(.0,.82);
    glVertex2f(.28,.82);
    glVertex2f(.28,.92);
    glVertex2f(.25,.88);
    glVertex2f(.08,.88);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 88, 88);
    glVertex2f(.2,.75);
    glVertex2f(.25,.78);
    glVertex2f(.15,.84);
    glVertex2f(.1,.84);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.08,.85);
    glVertex2f(.1,.85);
    glVertex2f(.1,.87);
    glVertex2f(.08,.87);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.12,.85);
    glVertex2f(.14,.85);
    glVertex2f(.14,.87);
    glVertex2f(.12,.87);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.16,.85);
    glVertex2f(.18,.85);
    glVertex2f(.18,.87);
    glVertex2f(.16,.87);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.2,.85);
    glVertex2f(.22,.85);
    glVertex2f(.22,.87);
    glVertex2f(.2,.87);
    glEnd();

    glPopMatrix();
}

void morningDisp(int val){
    glutDisplayFunc(morning);
}
void noonDisp(int val){
    glutDisplayFunc(noon);
}
void afternoonDisp(int val){
    glutDisplayFunc(afternoon);
}
void rainDisp(int val){
    glutDisplayFunc(rainy);
}
void eveningDisp(int val){
    glutDisplayFunc(evening);
}
void nightDisp(int val){
    glutDisplayFunc(night);
}
void snowDisp(int val){
    glutDisplayFunc(snowfall);
}

void morning() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    mSky();
    m=true;
    msun();
    bird();
    ground();
    day_buildings();
    dlamp();
    road();

    tree();
    glutTimerFunc(10000,noonDisp,0);
	glFlush();

}
void noon() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    nSky();
    nsun();
    m=false;
    plane();
    ground();
    day_buildings();
    dlamp();
    road();
    dcar1();
    dcar2();
    dbus1();
    tree();




    glutTimerFunc(10000,afternoonDisp,0);
	glFlush();

}

void afternoon() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    aSky();
    m=false;
    acloud();
    nsun();
    ground();
    day_buildings();
    dlamp();
    road();

    dcar1();
    dbus1();
    tree();



    glutTimerFunc(10000,rainDisp,0);
	glFlush();

}
void rainy() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    aSky();
    m=false;
    acloud();
    ground();
    day_buildings();
    dlamp();
        road();

    dcar1();
    dbus1();
    tree();

rain();

    glutTimerFunc(10000,eveningDisp,0);
	glFlush();

}

void evening() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    eSky();
    m=false;
    esun();
    ground();
    day_buildings();
    nlamp();
    road();
    dcar1();
    dcar2();
    dbus1();

        tree();
    glutTimerFunc(10000,nightDisp,0);
	glFlush();

}

void night() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    nytSky();
    m=false;
    moon();
    plane();
    ground();
    night_buildings();
    nlamp();
    road();
    ncar1();
    nbus1();
     tree();



    glutTimerFunc(10000,snowDisp,0);
	glFlush();

}

void snowfall() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    nytSky();
    m=false;
    moon();
    plane();
    ground();
    night_buildings();
    nlamp();
    road();
    snow();
    tree();



    glutTimerFunc(10000,morningDisp,0);
	glFlush();

}
void idle(){
   glutPostRedisplay();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("City View");
	glutReshapeWindow(600,600);
	glutDisplayFunc(morning);
    glutIdleFunc(idle);
    glutTimerFunc(30, update, 0);
    glutTimerFunc(30, update1, 0);
    glutTimerFunc(30, update2, 0);
    glutTimerFunc(30, update3, 0);
    glutTimerFunc(30, update4, 0);
    glutTimerFunc(30, update5, 0);
    glutTimerFunc(30, update6, 0);
    glutTimerFunc(30, update7, 0);
    glutTimerFunc(30, update7, 0);
    if(first){
            first=false;
    glutTimerFunc(2000,sound2,0);
    glutTimerFunc(1000,sound1,0);

    }

	glutMainLoop();
	return 0;
}
