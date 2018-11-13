//
// Created by Will McAllister on 11/13/18.
//

#include "graphics.h"
#include "Piece.h"

Piece::Piece(){

}

Piece::~Piece(){

}

void Piece::create_O(float x, float y){

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