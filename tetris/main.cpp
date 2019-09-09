//
//  main.cpp
//  tetris
//
//  Created by Daan Soeten on 09/09/2019.
//  Copyright © 2019 Daan Soeten. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
#include "controllers/Game.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "Starting Game" << endl;
    
    // Initialize SDL
    if(SDL_Init(SDL_INIT_EVERYTHING)){
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;
    }
    else{
        SDL_Log("Successfully initialized SDL");
        
        Game().start();
    }
    
    // Quit SQL
    SDL_Quit();
    
    cout << "Game Ended" << endl;
    
    return 0;
}
