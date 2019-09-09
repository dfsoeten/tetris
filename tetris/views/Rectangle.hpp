//
//  Rectangle.hpp
//  tetris
//
//  Created by Daan Soeten on 09/09/2019.
//  Copyright © 2019 Daan Soeten. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "../enums/Colors.h"

class Rectangle {
private:
    int width;
    int height;
    int x;
    int y;
    
    Color color;
};

#endif /* Rectangle_hpp */
