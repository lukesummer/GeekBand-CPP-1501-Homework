//
//  Circle.cpp
//  geekband_homework2
//
//  Created by luke wang on 31/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#include "Circle.h"
//构造函数
Circle::Circle(int radius,int x, int y, int no) : radius(radius),center(new Point(x,y)),Shape(no)
{
}
//拷贝构造函数
Circle::Circle(const Circle& other) : radius(other.radius),center(new Point(other.center)),Shape(other)
{
    
}
//拷贝复制函数
Circle& Circle::operator=(const Circle &other)
{
    
    //检测自我赋值
    if (this == &other)
    {
        return *this;
    }
    this->radius = other.radius;
    //先释放原指针
    delete center;
    //再分配空间
    center = new Point(other.center);
    return *this;
}
//析构函数
Circle::~Circle()
{
    delete center;
}

