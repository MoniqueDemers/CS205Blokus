//
// Created by Will McAllister on 11/13/18.
//

#include "graphics.h"
#include "Piece.h"

Piece::Piece(){

}

Piece::~Piece(){

}

Piece::Piece(float r, float g, float b){
    color.push_back(r);
    color.push_back(g);
    color.push_back(b);
}

void Piece::setColor(float r, float g, float b) {
    color[0] = r;
    color[1] = g;
    color[2] = b;
}

void Piece::create_O(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    //top left
    glVertex2f(-tileSize + x, y);
    glVertex2f(-tileSize + x, tileSize + y);
    glVertex2f(x, tileSize + y);
    glVertex2f(x, y);

    //top right
    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(x, tileSize + y);

    //bottom right
    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, y);
    glVertex2f(x, y);

    //bottom left
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

}

void Piece::create_1(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, y);
    glVertex2f(x, -tileSize + y);

    glEnd();

}

void Piece::create_2(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(2*tileSize + x, y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);

    glEnd();

}

void Piece::create_l3(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(3*tileSize + x, y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glEnd();

}

void Piece::create_l4(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(4*tileSize + x, y);
    glVertex2f(4*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(4*tileSize + x, y);

    glVertex2f(4*tileSize + x, y);
    glVertex2f(4*tileSize + x, -tileSize + y);

    glVertex2f(4*tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glEnd();

}

void Piece::create_l5(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(4*tileSize + x, y);
    glVertex2f(4*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(4*tileSize + x, y);
    glVertex2f(5*tileSize + x, y);
    glVertex2f(5*tileSize + x, -tileSize + y);
    glVertex2f(4*tileSize + x, -tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(5*tileSize + x, y);

    glVertex2f(5*tileSize + x, y);
    glVertex2f(5*tileSize + x, -tileSize + y);

    glVertex2f(5*tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(4*tileSize + x, y);
    glVertex2f(4*tileSize + x, -tileSize + y);

    glEnd();

}

void Piece:: create_Y(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(4*tileSize + x, y);
    glVertex2f(4*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(4*tileSize + x, y);

    glVertex2f(4*tileSize + x, y);
    glVertex2f(4*tileSize + x, -tileSize + y);

    glVertex2f(4*tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(x, y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glEnd();

}

void Piece:: create_N(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(x, tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);
    glVertex2f(tileSize + x, 2*tileSize + y);

    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(3*tileSize + x, tileSize + y);
    glVertex2f(3*tileSize + x, 2*tileSize + y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);

    glVertex2f(3*tileSize + x, tileSize + y);
    glVertex2f(4*tileSize + x, tileSize + y);
    glVertex2f(4*tileSize + x, 2*tileSize + y);
    glVertex2f(3*tileSize + x, 2*tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(2*tileSize + x, y);

    glVertex2f(x, tileSize + y);
    glVertex2f(4*tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, 2*tileSize + y);
    glVertex2f(4*tileSize + x, 2*tileSize + y);

    glVertex2f(x, tileSize + y);
    glVertex2f(x, y);

    glVertex2f(tileSize + x, 2*tileSize + y);
    glVertex2f(tileSize + x, y);

    glVertex2f(2*tileSize + x, 2*tileSize + y);
    glVertex2f(2*tileSize + x, y);

    glVertex2f(3*tileSize + x, 2*tileSize + y);
    glVertex2f(3*tileSize + x, tileSize + y);

    glVertex2f(4*tileSize + x, tileSize + y);
    glVertex2f(4*tileSize + x, 2*tileSize + y);

    glEnd();

}

void Piece:: create_Z4(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(x, tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, y);
    glVertex2f(x, y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(x, y);
    glVertex2f(2*tileSize + x, y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glEnd();

}

void Piece:: create_Z5(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);

    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(2*tileSize + x, -3*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);

    glEnd();

}

void Piece:: create_L4(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);

    glEnd();

}

void Piece:: create_L5(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(4*tileSize + x, -tileSize + y);
    glVertex2f(4*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(4*tileSize + x, -tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(4*tileSize + x, -2*tileSize + y);

    glVertex2f(4*tileSize + x, -tileSize + y);
    glVertex2f(4*tileSize + x, -2*tileSize + y);

    glEnd();

}

void Piece:: create_V3(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glEnd();

}

void Piece:: create_V5(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -3*tileSize + y);
    glVertex2f(x, -3*tileSize + y);

    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);
    glVertex2f(tileSize + x, -3*tileSize + y);

    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -3*tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -3*tileSize + y);

    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);

    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);

    glVertex2f(x, -3*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);

    glEnd();

}

void Piece:: create_W(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);
    glVertex2f(tileSize + x, -3*tileSize + y);

    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -3*tileSize + y);

    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -3*tileSize + y);

    glVertex2f(3*tileSize + x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(3*tileSize + x, -2*tileSize + y);

    glVertex2f(tileSize + x, -3*tileSize + y);
    glVertex2f(3*tileSize + x, -3*tileSize + y);

    glEnd();

}

void Piece:: create_T4(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(x, tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);
    glVertex2f(tileSize + x, 2*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, 2*tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, tileSize + y);

    glVertex2f(x, y);
    glVertex2f(3*tileSize + x, y);

    glVertex2f(x, tileSize + y);
    glVertex2f(3*tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, 2*tileSize + y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);

    glEnd();

}

void Piece:: create_T5(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(x, tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);
    glVertex2f(tileSize + x, 2*tileSize + y);

    glVertex2f(tileSize + x, 2*tileSize + y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);
    glVertex2f(2*tileSize + x, 3*tileSize + y);
    glVertex2f(tileSize + x, 3*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, 3*tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, 3*tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, tileSize + y);

    glVertex2f(x, y);
    glVertex2f(3*tileSize + x, y);

    glVertex2f(x, tileSize + y);
    glVertex2f(3*tileSize + x, tileSize + y);

    glVertex2f(tileSize + x, 2*tileSize + y);
    glVertex2f(2*tileSize + x, 2*tileSize + y);

    glVertex2f(tileSize + x, 3*tileSize + y);
    glVertex2f(2*tileSize + x, 3*tileSize + y);

    glEnd();

}

void Piece:: create_P(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -3*tileSize + y);
    glVertex2f(x, -3*tileSize + y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -3*tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -3*tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(x, y);
    glVertex2f(2*tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(x, -3*tileSize + y);
    glVertex2f(tileSize + x, -3*tileSize + y);

    glEnd();

}

void Piece:: create_X(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(tileSize + x, y);

    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);


    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glVertex2f(3*x, y);
    glVertex2f(3*x, -tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);

    glVertex2f(x, y);
    glVertex2f(3*tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(2*tileSize + x, -2*tileSize + y);

    glEnd();

}

void Piece:: create_U(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(x, tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, y);
    glVertex2f(x, y);

    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(3*tileSize + x, tileSize + y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(2*tileSize + x, y);

    glEnd();

    //LINES

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(x, tileSize + y);
    glVertex2f(tileSize + x, tileSize + y);

    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(3*tileSize + x, tileSize + y);

    glVertex2f(x, y);
    glVertex2f(3*tileSize + x, y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glEnd();

}

void Piece:: create_F(float x, float y){

    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);

    glVertex2f(x, y);
    glVertex2f(tileSize + x, y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(tileSize + x, y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(2*tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);

    glVertex2f(2*tileSize + x, y);
    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glVertex2f(x, -tileSize + y);
    glVertex2f(tileSize + x, -tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, y);
    glVertex2f(tileSize + x, y);

    glEnd();

    //LINES (includes border and grid lines)

    glLineWidth(0.03);

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(x, y);
    glVertex2f(3*tileSize + x, y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, tileSize + y);

    glVertex2f(x, -2*tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(3*tileSize + x, y);
    glVertex2f(3*tileSize + x, -tileSize + y);

    glVertex2f(3*tileSize + x, -tileSize + y);
    glVertex2f(x, -tileSize + y);

    glVertex2f(x, y);
    glVertex2f(x, -2*tileSize + y);

    glVertex2f(tileSize + x, tileSize + y);
    glVertex2f(tileSize + x, -2*tileSize + y);

    glVertex2f(2*tileSize + x, tileSize + y);
    glVertex2f(2*tileSize + x, -tileSize + y);

    glEnd();

}
