//
//  Game.hpp
//  tetris
//
//  Created by Daan Soeten on 09/09/2019.
//  Copyright © 2019 Daan Soeten. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "../views/Board.hpp"

class Game{
private:
    bool isRunning = true;
    Board *board;
    
public:
    Game();
    ~Game();
    void start();
};

#endif /* Game_hpp */
