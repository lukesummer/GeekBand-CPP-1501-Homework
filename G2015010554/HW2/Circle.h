//
//  Circle.h
//  geekband_homework2
//
//  Created by luke wang on 31/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#ifndef __geekband_homework2__Circle__
#define __geekband_homework2__Circle__

#include <stdio.h>
#include "shape.h"
#include "Point.h"
#define PI 3.1415926
class Circle : public Shape
{
private:
    double radius;
    Point* center;
public:
    //构造函数
    Circle(int radius, int x, int y, int no);
    //拷贝构造函数
    Circle(const Circle& circle);
    //拷贝复制函数
    Circle& operator=(const Circle& circle);
    //析构函数
    ~Circle();
    //获取面积函数
    double getArea() const
    {
        return PI*this->radius*this->radius;
    }
};

#endif /* defined(__geekband_homework2__Circle__) */
