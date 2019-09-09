//
//  Game.cpp
//  tetris
//
//  Created by Daan Soeten on 09/09/2019.
//  Copyright © 2019 Daan Soeten. All rights reserved.
//

#include "Game.hpp"

Game::Game(){
    board = new Board();
}

void Game::start(){
    SDL_Event e;
    
    while (isRunning){
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                isRunning = false;
            }
        }
    }
}

Game::~Game(){
    
}
