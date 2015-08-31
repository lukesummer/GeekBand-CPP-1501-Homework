//
//  Shape.h
//  Rectangle
//
//  Created by luke wang on 11/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#ifndef __Rectangle__Shape__
#define __Rectangle__Shape__

#include <stdio.h>
class Shape
{
private:
    int no;
public:
    //析构函数一定要virtual
    Shape(int no) : no(no)
    {
    }
    Shape(const Shape& shape) : no(shape.no)
    {
    }
    virtual ~Shape()
    {
    }
    virtual double getArea() const = 0;

};
#endif /* defined(__Rectangle__Shape__) */
