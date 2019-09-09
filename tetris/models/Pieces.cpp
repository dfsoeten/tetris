//
//  Pieces.cpp
//  tetris
//
//  Created by Daan Soeten on 09/09/2019.
//  Copyright © 2019 Daan Soeten. All rights reserved.
//

#include <vector>
#include "Pieces.hpp"

using namespace std;

vector<vector<char>> Pieces::getBlock(int piece, int rotation){
    return pieces[piece][rotation];
}

vector<int> Pieces::getPiecePosition(int piece, int rotation){
    return piecesPosition[piece][rotation];
}
