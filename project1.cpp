#include <GL/glut.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int rflag=0;//int count=2;
int xp=700,yp=700;
int size=0;
vector<int> xp1;
vector<int> yp1;

int swt;
void mouse( int button, int state, int x, int y )
{
    if( button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
    {
        
        xp=x;
        yp=y;
        
        
        
        
        
    }
    glutPostRedisplay();
}
/***********/





/*************/
void display()
{
//if(count%2==0)
//{

cout<<" ** "<<endl;
glClearColor( 0, 0, 0, 1 );
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    double w = glutGet( GLUT_WINDOW_WIDTH );
    double h = glutGet( GLUT_WINDOW_HEIGHT );
    glOrtho( 0, w, h, 0, -1, 1 );

    glColor3f(1,1,0);
    
        cout<<" debug "<<xp<<" "<<yp<<endl;
        
        
        
        //size=xp1.sizeof();
        
        //size=0;
   //     for (std::vector<int>::iterator it = xp1.begin() ; it != xp1.end(); ++it)
     
     glBegin(GL_LINES);
     
     glVertex2f(550,480);
     glVertex2f(550,0);
     
     glEnd();
     
     glBegin(GL_POLYGON);
     
     glVertex2f(550,400);
     glVertex2f(550,350);
     glVertex2f(600,350);
     glVertex2f(600,400);
     
     glEnd();
     
     
     if(xp>=550&&xp<=600&&yp>=350&&yp<=400)
     {
     	rflag=1;
     }
     
     
     else if(rflag==1)//&&xp!=xp1[size]&&yp!=yp1[size])
     {size++;
     
     
     
     xp1.push_back(xp);
        yp1.push_back(yp);
     
     
     
     
     cout<<" size "<<size<<" and vector "<<xp1[size-1]<<" point "<<xp<<endl;   
        for(int i=0;i<size;i++)
        {
        cout<<"** ** "<<xp1[i]<<"** ** "<<yp1[i]<<endl;
        
        glBegin(GL_POLYGON);
        	glVertex2f(xp1[i],yp1[i]);
        	glVertex2f(xp1[i]+80,yp1[i]);
        	glVertex2f(xp1[i]+80,yp1[i]+30);
        	glVertex2f(xp1[i],yp1[i]+30);
        	glEnd();
        	
        }
        
        
               
        
        /*glVertex2f(xp,yp);
        glVertex2f(xp+40,yp);
        glVertex2f(xp+40,yp+30);
        glVertex2f(xp,yp+30);*/
        }
        
        else
        {
        
        }
    
    glPopMatrix();
    glutSwapBuffers();



    //}count++;
    
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,100);
    glutCreateWindow("GLUT");
    glutMouseFunc(mouse);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
