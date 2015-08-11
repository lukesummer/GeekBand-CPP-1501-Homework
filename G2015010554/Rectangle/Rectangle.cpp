//
//  Rectangle.cpp
//  Rectangle
//
//  Created by luke wang on 11/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#include "Rectangle.h"
//构造函数
Rectangle::Rectangle(int width, int height, int x, int y)
: width(width), height(height), leftUp(new Point(x,y))
{
}
//拷贝构造函数
Rectangle::Rectangle(const Rectangle& other) : width(other.width), height(other.height),leftUp(new Point(other.leftUp))
{
}
//拷贝赋值函数
//析构函数
Rectangle& Rectangle::operator = (const Rectangle& other)
{
    //检测自我赋值
    if (this == &other)
    {
        return *this;
    }
    width = other.width;
    height = other.height;
    //*leftUp = *(other.leftUp);//不可以直接赋值，会造成内存泄露
    //先释放原指针
    delete leftUp;
    //再分配空间
    leftUp = new Point(other.width, other.height);
    return *this;
}
Rectangle::~Rectangle()
{
    delete leftUp;
}
