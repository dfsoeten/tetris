//
//  Board.cpp
//  tetris
//
//  Created by Daan Soeten on 09/09/2019.
//  Copyright © 2019 Daan Soeten. All rights reserved.
//

#include <SDL2/SDL.h>
#include "Board.hpp"

Board::Board(){
    this->window = SDL_CreateWindow("Tetris", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    this->renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_SetRenderDrawColor(this->renderer, 255, 0, 0, 255);
    this->clear();
    this->present();
};

Board::~Board(){
    
}

void Board::clear(){
    SDL_RenderClear(this->renderer);
}

void Board::present(){
    SDL_RenderPresent(this->renderer);
}
