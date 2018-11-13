#include "graphics.h"
#include <string>

GLdouble width, height;
int wd;
float tileSize = 0.03;

void init() {
    width = 1024;
    height = 980;
}

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Black and opaque
}

void create_O(float x, float y){

    //SHAPE
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);

    glVertex2f(-tileSize + x, y);
    glVertex2f(x, y);
    glVertex2f(x, tileSize + y);
    glVertex2f(-tileSize + x, tileSize + y);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(x, tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, y);
    glVertex2f(x, y);

    glVertex2f(-tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);
    glVertex2f(x, y);
    glVertex2f(-tileSize + x, y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(-tileSize + x, tileSize + y);

    glVertex2f(-tileSize + x, tileSize + y);
    glVertex2f(-tileSize + x, -tileSize + y);

    glVertex2f(x, tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(-tileSize + x, y);
    glVertex2f(tileSize + x, y);

    glEnd();

    glFlush();
}

void drawBoard()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(2.0, 1.0, 1.0);
    int xsize=0,ysize=250;
    for(int j=0;j<20;j++)
    {
        xsize=250;
        for(int i=0;i<20;i++)
        {
            glBegin(GL_POLYGON);
            glVertex3f(-50.0+xsize, -50.0+ysize, 0.0);
            glVertex3f(-40.0+xsize, -50.0+ysize, 0.0);
            glVertex3f(-40.0+xsize, -40.0+ysize, 0.0);
            glVertex3f(-50.0+xsize, -40.0+ysize, 0.0);
            glEnd();
            xsize+=10.0;
        }
        ysize+=10.0;
    }
    glFlush();
}



/* Handler for window-repaint event. Call back when the window first appears and
 whenever the window needs to be re-painted. */
void display() {
    // tell OpenGL to use the whole window for drawing
    glViewport(0, 0, width, height);
    
    // do an orthographic parallel projection with the coordinate
    // system set to first quadrant, limited by screen/window size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(0.0, width, height, 0.0, -1.f, 1.f);

    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    /*
     * Draw tile
     */
    create_O(0.0,0.0);

}

// http://www.theasciicode.com.ar/ascii-control-characters/escape-ascii-code-27.html
void kbd(unsigned char key, int x, int y)
{
    // escape
    if (key == 27) {
        glutDestroyWindow(wd);
        exit(0);
    }
    
    glutPostRedisplay();
    
    return;
}

void kbdS(int key, int x, int y) {
    switch(key) {
        case GLUT_KEY_DOWN:
            
            break;
        case GLUT_KEY_LEFT:
            
            break;
        case GLUT_KEY_RIGHT:
            
            break;
        case GLUT_KEY_UP:
            
            break;
    }
    
    glutPostRedisplay();
    
    return;
}

void cursor(int x, int y) {
    
    
    glutPostRedisplay();
}

// button will be GLUT_LEFT_BUTTON or GLUT_RIGHT_BUTTON
// state will be GLUT_UP or GLUT_DOWN
void mouse(int button, int state, int x, int y) {
    
    
    
    glutPostRedisplay();
}

void timer(int extra) {
    
    glutPostRedisplay();
    glutTimerFunc(30, timer, 0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    
    init();
    
    glutInit(&argc, argv);          // Initialize GLUT
    
    glutInitDisplayMode(GLUT_RGBA);
    
    glutInitWindowSize((int)width, (int)height);
    glutInitWindowPosition(100, 200); // Position the window's initial top-left corner
    /* create the window and store the handle to it */
    wd = glutCreateWindow("Blockus" /* title */ );
    
    // Register callback handler for window re-paint event
    glutDisplayFunc(display);
    
    // Our own OpenGL initialization
    initGL();
    
    // register keyboard press event processing function
    // works for numbers, letters, spacebar, etc.
    glutKeyboardFunc(kbd);
    
    // register special event: function keys, arrows, etc.
    glutSpecialFunc(kbdS);
    
    // handles mouse movement
    glutPassiveMotionFunc(cursor);
    
    // handles mouse click
    glutMouseFunc(mouse);
    
    // handles timer
    glutTimerFunc(0, timer, 0);
    
    // Enter the event-processing loop
    glutMainLoop();
    return 0;
}
