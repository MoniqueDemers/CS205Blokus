//
// Created by moniq on 11/16/2018.
//

#ifndef GRAPHICS_STARTER_PLAYER_H
#define GRAPHICS_STARTER_PLAYER_H
#include <bits/stdc++.h>
#include "Piece.h"
using namespace std;

class Player {
private:
    string name;
    int score;
    bool human;
    vector<Piece> color1;
    vector<Piece> color2;

public:
    //default constructor
    Player();

    //getters
    string getName() const;
    int getScore() const;
    bool getHuman() const;

    //setters
    void setName(string n);
    void setScore(int s);
    void setHuman(bool b);

    //peek at hand
    void seeHand(vector<Piece> color);
    void addToScore(int s);

};


#endif //GRAPHICS_STARTER_PLAYER_H
