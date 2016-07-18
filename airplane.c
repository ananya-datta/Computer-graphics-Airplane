#include<GL/glut.h>
#include <stdio.h>
#include<math.h>
float xt=1.0,yt=1.0; // For interactive Keyboard
float x = 1.0,y = 1.0,z=1.0; // For Movement
float angle =0; // For Function animation
float Autorun = 0; 
// For Movement Autorun
float Autoru = 0;
int ww=1024;
int wh=720;
int swtch=0;
float fx=0;
float fy=0;
int xa=100;

GLfloat xRotated, yRotated, zRotated;

void animation(void)
{
if(Autorun<=250 && Autorun>-100)
Autorun = Autorun-0.10;
else Autorun = 250;
glutPostRedisplay();
}


void animation1(void)
{
if(Autoru<=10 && Autoru>-50)
Autoru = Autoru-0.02;
else Autoru = 0;
glutPostRedisplay();
}

//CIRCLE
void drawCircle(GLfloat x, GLfloat y, GLfloat radius){ 
	int i; 
 	int triangleAmount = 100; //triangles used to draw circle 
 	GLfloat PI=3.1428;
         GLfloat twicePi = 2.0f * PI; 
 	 glBegin(GL_TRIANGLE_FAN); 
 		glVertex2f(x, y); // center of circle 
 		for(i = 0; i <= triangleAmount;i++) {  
 			glVertex2f( 
 		            x + (radius * cos(i *  twicePi / triangleAmount)),  
 			    y + (radius * sin(i * twicePi / triangleAmount)) 
 			); 
 		} 
 	glEnd(); 
 } 

void ide(void){
animation1();
animation();
}

void sand(void){

glColor3f(1.0,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,0);
	glVertex2f(0,5);
	glVertex2f(20,5);
	glVertex2f(46,10);
        glVertex2f(67,13);
        glVertex2f(82,7);
	glVertex2f(99,7);
	glVertex2f(115,5);
	glVertex2f(135,8);
        glVertex2f(160,6);
	glVertex2f(200,12);
       	glVertex2f(250,0);
	glEnd();

}

//For lighting
void light(void)
{
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 0.0 };
   GLfloat light_position[] = { 1.0, 1.0, 1.0, 1.0 };
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);

   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
}

//For shading
void shade(void){
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position[] = { 1.0, 1.0, 1.0, 1.0 };
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);

   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
}
void waves(void){
glPushMatrix();
	glTranslatef(0.0,Autoru,0.0);
	//glTranslatef(xt,yt,0.0); 	
	glPushMatrix();	

glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(83,44);
	glVertex2f(89,39);
        glVertex2f(89,39);
        glVertex2f(94,41);
        glVertex2f(94,41);
        glVertex2f(101,39);
        glVertex2f(101,39);
	glVertex2f(109,38);
        glVertex2f(109,38);
        glVertex2f(115,39);
        glVertex2f(115,39);
	glVertex2f(125,41);
        glVertex2f(125,41);
	glVertex2f(139,38);
        glVertex2f(139,38);
        glVertex2f(151,39);
        glVertex2f(151,39);
	glVertex2f(159,38);
        glVertex2f(159,38);
        glVertex2f(170,39);
        glVertex2f(170,39);
	glVertex2f(175,41);
	glVertex2f(189,38);
	glEnd();

glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(83,74);
	glVertex2f(89,69);
        glVertex2f(89,69);
        glVertex2f(94,71);
        glVertex2f(94,71);
        glVertex2f(101,69);
        glVertex2f(101,69);
	glVertex2f(109,68);
        glVertex2f(109,68);
        glVertex2f(115,69);
        glVertex2f(115,69);
	glVertex2f(125,71);
        glVertex2f(125,71);
	glVertex2f(139,68);
        glVertex2f(139,68);
        glVertex2f(151,69);
        glVertex2f(151,69);
	glVertex2f(159,68);
        glVertex2f(159,68);
        glVertex2f(170,69);
        glVertex2f(170,69);
	glVertex2f(175,71);
	glVertex2f(189,68);
	glEnd();

glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(3,54);
	glVertex2f(9,59);
        glVertex2f(9,59);
        glVertex2f(14,61);
        glVertex2f(14,61);
        glVertex2f(21,59);
        glVertex2f(21,59);
	glVertex2f(29,58);
        glVertex2f(29,58);
        glVertex2f(35,59);
        glVertex2f(35,59);
	glVertex2f(45,61);
        glVertex2f(45,61);
	glVertex2f(59,58);
        glVertex2f(59,58);
        glVertex2f(71,59);
        glVertex2f(71,59);
	glVertex2f(79,58);
        glVertex2f(79,58);
        glVertex2f(90,59);
        glVertex2f(90,59);
	glVertex2f(95,61);
	glVertex2f(109,58);
	glEnd();

glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(3,84);
	glVertex2f(9,89);
        glVertex2f(9,89);
        glVertex2f(14,91);
        glVertex2f(14,91);
        glVertex2f(21,89);
        glVertex2f(21,89);
	glVertex2f(29,88);
        glVertex2f(29,88);
        glVertex2f(35,89);
        glVertex2f(35,89);
	glVertex2f(45,81);
        glVertex2f(45,81);
	glVertex2f(59,88);
        glVertex2f(59,88);
        glVertex2f(71,89);
        glVertex2f(71,89);
	glVertex2f(79,88);
        glVertex2f(79,88);
        glVertex2f(90,89);
        glVertex2f(90,89);
	glVertex2f(95,91);
	glVertex2f(109,88);
	glEnd();

glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(103,49);
	glVertex2f(109,53);
        glVertex2f(109,53);
        glVertex2f(114,55);
        glVertex2f(114,55);
        glVertex2f(121,53);
        glVertex2f(121,53);
	glVertex2f(129,51);
        glVertex2f(129,51);
        glVertex2f(135,54);
        glVertex2f(135,54);
	glVertex2f(145,56);
        glVertex2f(145,56);
	glVertex2f(159,52);
        glVertex2f(159,52);
        glVertex2f(171,54);
        glVertex2f(171,54);
	glVertex2f(179,53);
        glVertex2f(179,53);
        glVertex2f(190,55);
        glVertex2f(190,55);
	glVertex2f(195,57);
	glVertex2f(219,61);
	glEnd();

glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(203,49);
	glVertex2f(209,53);
        glVertex2f(209,53);
        glVertex2f(214,55);
        glVertex2f(214,55);
        glVertex2f(221,53);
        glVertex2f(221,53);
	glVertex2f(229,51);
        glVertex2f(229,51);
        glVertex2f(235,54);
        glVertex2f(235,54);
	glVertex2f(245,56);
        glVertex2f(245,56);
glEnd();

glColor3f(1.0,1.0,1.0);
        glBegin(GL_LINES);
	
        glVertex2f(219,72);
        glVertex2f(221,74);
        glVertex2f(221,74);
	glVertex2f(229,73);
        glVertex2f(229,73);
        glVertex2f(240,75);
        glVertex2f(240,75);
	glVertex2f(255,77);
	
	glEnd();
glPopMatrix();
glPopMatrix();
}



void airplane(void)
{

	glPushMatrix();
	glTranslatef(Autorun,0.0,0.0);
	glTranslatef(xt,yt,0.0); 	
	glPushMatrix();	

	//glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(1.0,0.0,0.0);


//body		
glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(10,50);
 glColor3f(0.0,0.2,1.0);
	glVertex2f(13,45);
	glVertex2f(20,40);
	glVertex2f(30,37);
        glVertex2f(60,40);
        glVertex2f(65,42);
	glVertex2f(80,52);
glColor3f(1.0,1.0,1.0);
	glVertex2f(85,60);
	glVertex2f(55,67);
        glVertex2f(30,70);
	glVertex2f(25,67);
       	glVertex2f(15,57);
	glEnd();

//Door
glColor3f(0.0,0.0,0.0);
        glBegin(GL_QUADS);
	glVertex2f(55,39);
	glVertex2f(64,41);
        glVertex2f(64,62);
glColor3f(1.0,1.0,0.9);
	glVertex2f(57,62);
	glEnd();
//light();
//wing big1
glColor3f(0.0,0.0,0.9);
        glBegin(GL_POLYGON);
	glVertex2f(35,45);
	glVertex2f(40,50);
	glVertex2f(55,51);
	glVertex2f(80,23);
        glVertex2f(65,23);
        glEnd();
glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
	glVertex2f(40,50);
	glVertex2f(55,51);
glColor3f(0.0,0.3,0.6);
	glVertex2f(80,23);
        glVertex2f(65,23);
        glEnd();

//wing big2
glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
	glVertex2f(45,68);
	glVertex2f(29,69);
glColor3f(0.0,0.3,0.6);
	glVertex2f(28,80);
        glVertex2f(35,80);
        glEnd();

glColor3f(0.0,0.0,0.9);
        glBegin(GL_POLYGON);
	glVertex2f(33,68);
	glVertex2f(29,69);
	glVertex2f(28,80);
        glEnd();

//wing small 2
glColor3f(0.0,0.0,0.9);
        glBegin(GL_POLYGON);
	glVertex2f(83,60);
	glVertex2f(68,64);
        glVertex2f(70,70);
	glVertex2f(75,70);
	glEnd();

//fing
glColor3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);
	glVertex2f(83,60);
	glVertex2f(72,60);
        glVertex2f(70,62);
	glVertex2f(85,72);
	glVertex2f(90,70);
        glEnd();
 

//wing small 1
glColor3f(0.0,0.0,0.9);
        glBegin(GL_POLYGON);
	glVertex2f(83,58);
	glVertex2f(72,58);
        glVertex2f(70,56);
	glVertex2f(88,48);
	glVertex2f(93,48);
        glEnd();

//window 1
glColor3f(0.0,0.0,0.4);
        glBegin(GL_POLYGON);
	glVertex2f(25,67);
	glVertex2f(17,59);
        glVertex2f(26,54);
glColor3f(1.0,1.0,1.0);
	glVertex2f(32,65);
	glEnd();

//window 2
glColor3f(0.0,0.0,0.4);
        glBegin(GL_POLYGON);
	glVertex2f(43,63);
	glVertex2f(41,54);
        glVertex2f(28,53);
glColor3f(1.0,1.0,1.0);
	glVertex2f(34,64);
	glEnd();

//window 3
glColor3f(0.0,0.0,0.4);
        glBegin(GL_POLYGON);
	glVertex2f(53,62);
	glVertex2f(52,56);
        glVertex2f(43,54);
glColor3f(1.0,1.0,1.0);
	glVertex2f(45,63);
	glEnd();

glPopMatrix();
glPopMatrix();

}






//DISPLAY
void background(void){
//BACKGROUND sky
glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
	glVertex2f(0,0);
    glColor3f(1.0,1.0,1.0);
glColor3f(0.0,0.5,1.0);
	glVertex2f(0,250);
        glColor3f(0.0,0.5,1.0);
        glVertex2f(250,250);
        glColor3f(1.0,1.0,1.0);
	glVertex2f(250,0);
	glEnd();

//sea
glColor3f(0.0,0.4,1.0);
        glBegin(GL_POLYGON);
	glVertex2f(0,0);
	glVertex2f(0,100);
        glVertex2f(250,100);
        glColor3f(1.0,1.0,1.0);
	glVertex2f(250,0);
	glEnd();

sand();
waves();
//light();
//shade();
//cloud 2
glColor3f(1.0,1.0,1.0);
drawCircle(100,160,12);   
drawCircle(110,160,16);
drawCircle(120,160,12);

//cloud 3
drawCircle(10,170,19);   
drawCircle(20,170,23);
drawCircle(30,170,19);
}













void keyboard(GLubyte key, int x, int y) // For keyboard interactive
{
switch ( key )
{
case 'l':
/*xt += 1.2;
glColor3f(0.0,1.0,0.0);
glutPostRedisplay();
break;*/
light();
break;
case 'a':
xt -= 1.0;
glColor3f(1.0,0.0,0.0);
glutPostRedisplay();
break;
case 's':
yt -= 1.0;
glColor3f(0.0,0.0,0.0);
glutPostRedisplay();
break;
case 'w':
yt += 1.0;
glColor3f(0.0,0.0,1.0);
glutPostRedisplay();
break;
/*case 'e':
xt += 1.0;
yt += 1.0;
glColor3f(1.0,0.0,1.0);
glutPostRedisplay();
break;
case 'q':
xt -= 1.0;
yt += 1.0;
glColor3f(0.0,1.0,1.0);
glutPostRedisplay();
break;
case 'c':
xt += 1.0;
yt -= 1.0;
glColor3f(1.0,0.0,1.0);
glutPostRedisplay();
break;
case 'z':
xt -= 1.0;
yt -= 1.0;
glColor3f(0.0,0.0,1.0);
glutPostRedisplay();
break;*/
default:
break;
}
}

void myinit()
{
	glClearColor(0.0,1.0,0.7,0.0);
	glColor3f(1.0,0.0,0.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
	gluOrtho2D(0.0,250.0,0.0,250.0);
        glMatrixMode(GL_MODELVIEW);
}


void display( void ){
glClear(GL_COLOR_BUFFER_BIT);
background();
airplane();

//cloud 1
drawCircle(180,180,8);   
drawCircle(190,180,12);
drawCircle(200,180,8);

glFlush();
}



int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Airplane");
	glutDisplayFunc(display);
	myinit();
	//glutIdleFunc(animation);
        glutIdleFunc(ide);
	glutKeyboardFunc(keyboard);
        glutMainLoop();
	glFinish();
return 0;
}
