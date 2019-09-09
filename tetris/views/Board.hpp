//
//  Board.hpp
//  tetris
//
//  Created by Daan Soeten on 09/09/2019.
//  Copyright © 2019 Daan Soeten. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include "Rectangle.hpp"

class Board{
private:
    int width = 800;
    int height = 600;
    
    SDL_Window *window;
    SDL_Renderer *renderer;
    
public:
    Board();
    ~Board();
    
    void drawRectangle(Rectangle *rectangle);
    void clear();
    void present();
};

#endif /* Board_hpp */
