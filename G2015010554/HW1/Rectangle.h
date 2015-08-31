//
//  Rectangle.h
//  Rectangle
//
//  Created by luke wang on 11/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#ifndef __Rectangle__Rectangle__
#define __Rectangle__Rectangle__

#include <stdio.h>
#include <string>
#include <sstream>
#include "Shape.h"
#include "Point.h"
class Rectangle: public Shape
{
private:
    int width;
    int height;
    Point * leftUp;
public:
    //构造函数
    Rectangle(int width = 0, int height = 0, int x = 0, int y = 0);
    //拷贝构造函数
    Rectangle(const Rectangle& other);
    //拷贝复制函数
    Rectangle& operator=(const Rectangle& other);
    //析构函数
    ~Rectangle();
    int getWidth()
    {
        return width;
    }
    int getHeight()
    {
        return height;
    }
    std::string getLeftUp()
    {
        std::stringstream x_stream;
        x_stream << leftUp->getX();
        std::stringstream y_stream;
        y_stream << leftUp->getY();
        return "x is " + x_stream.str() + " and y is " + y_stream.str();
    }
};
#endif /* defined(__Rectangle__Rectangle__) */
