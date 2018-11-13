//
// Created by Will McAllister on 11/13/18.
//

#ifndef BLOCKUS_PIECE_H
#define BLOCKUS_PIECE_H

class Piece {

public:
    Piece();
    ~Piece();

    //Creates O-shaped piece
    void create_O(float x, float y);

private:
    float tileSize = 0.03;

};

#endif //BLOCKUS_PIECE_H
