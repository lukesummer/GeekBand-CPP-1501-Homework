//
//  Point.h
//  Rectangle
//
//  Created by luke wang on 11/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#ifndef __Rectangle__Point__
#define __Rectangle__Point__

#include <stdio.h>
class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    {
    }
    Point(const Point* pp) : x(pp->x), y(pp->y)
    {
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
private:
    int x;
    int y;
};
#endif /* defined(__Rectangle__Point__) */
